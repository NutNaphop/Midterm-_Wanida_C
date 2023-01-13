#include <stdio.h>
int sum_input();
int max(float[5][5]);
int display(float,int,float,int,float,int);
float showtable(float[5][5]);
int main(){
    sum_input();
}

int sum_input(){
    float table_nisit [5][5] ; 
    float score ; 
    float sum_score ;
    for (int i = 0 ; i < 5 ; i ++){
        for (int j = 0 ; j < 3 ; j ++ ){
            printf("Input Nisit Number #%d with number of %d test :",i+1,j+1);
            scanf("%f",&score); 
            table_nisit[i][j] = score ;
            sum_score += score ; 
            table_nisit[i][3] = sum_score ;
        }
        sum_score = 0 ;
    }
    max(table_nisit);
}

int max(float table_nisit[5][5]){
    float max1 = 0 , max2 = 0 , max3 = 0;
    int top1 = 0 , top2 = 0 , top3 = 0 ; 
    for (int i = 0 ; i < 5 ; i ++){
        if (table_nisit[i][0] > max1){
            max1 = table_nisit[i][0];
            top1 = i + 1 ;
            
        } 
        if (table_nisit[i][1] > max2){
            max2 = table_nisit[i][1];
            top2 = i + 1 ;
        } 
        if (table_nisit[i][2] > max3){
            max3 = table_nisit[i][2];
            top3 = i + 1 ;
        } 
    }
    display(max1,top1,max2,top2,max3,top3);
    showtable(table_nisit);
}

float showtable(float table_nisit[5][5]){
    printf("********************************\n");
    printf("Num\t1st\t2nd\3nd\tSum\n");
    for(int i = 0 ; i < 5 ; i ++){
        for(int j = 0 ; j < 4 ; j ++){
            printf("%.2f\t",table_nisit[i][j]);
        }
        printf("\n");
    }
}

int display(float max1 ,int top1,float max2,int top2,float max3,int top3){
    printf("*************************************************\n");
    printf("Top of First test is %.2f By Nisit number %d\n",max1,top1);
    printf("Top of Second test is %.2f By Nisit number %d\n",max2,top2);
    printf("Top of Third test is %.2f By Nisit number %d\n",max3,top3);
}
