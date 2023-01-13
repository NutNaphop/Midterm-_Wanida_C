#include <stdio.h>
int main(){
    int bill[10] = {2000,3000,1000,500,600,700,800,250,1000};
    int max_table_pos = 0 ;
    int max_pay = 0 ;
    for (int i = 0 ; i < 10 ; i ++){
        if (bill[i] > max_pay){
            max_table_pos = i + 1 ;
            max_pay = bill[i]; 
        }
    }
    printf("Result \n");
    printf("No. Table : %d\n",max_table_pos);
    printf("Money : %d",max_pay);
}