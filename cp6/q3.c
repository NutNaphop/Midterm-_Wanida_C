#include <stdio.h>

int input() ; 
int plus(int[20][20],int[20][20]);
int minus(int[20][20],int[20][20]);

int row ; 
int col ; 

int main(){
    input();
}


int input(){

    printf("Row : ");
    scanf("%d",&row);
    printf("Col : ");
    scanf("%d",&col);

    int A[row][col] ;
    int B[row][col] ;
    int num ;  
    
    puts("*** Input Matrix A ***");
    for (int i = 1 ; i <= row ; i ++){
        for (int j = 1 ; j <= col ; j ++){
            printf("Matrix A at [%d][%d] : ",i,j);
            scanf("%d",&A[i-1][j-1]);
           }
    }

    puts("*** Matrix A ***");
    for (int i = 1 ; i <= row ; i ++){
        for (int j = 1 ; j <= col ; j ++){
            printf("%d\t",A[i-1][j-1]);
        }
        puts("");
    }

    puts("***** input Matrix B ******");
    for (int i = 1 ; i <= row ; i ++){
        for (int j = 1 ; j <= col ; j ++ ){
            printf("Matrix B at [%d][%d] : ",i,j);
            scanf("%d",&B[i-1][j-1]);
        }
    }
    puts("**** Matrix B ****");
    for (int i = 1 ; i <= row ; i ++){
        for (int j = 1 ; j <= col ; j ++){
            printf("%d\t",B[i-1][j-1]);
        }
        puts("");
    }
    plus(A,B);
    minus(A,B);

}

int plus(int A[row][col], int B[row][col]){
    puts("**** Result Plus ****");
    for (int i = 1 ; i <= row ; i ++){
        for (int j = 1 ; j <= col ; j ++){
            printf("%d\t",A[i-1][j-1]+B[i-1][j-1]);
        }
        puts("");
    }
}

int minus(int A[row][col], int B[row][col]){
    puts("**** Result Minus ****");
    for (int i = 1 ; i <= row ; i ++){
        for (int j = 1 ; j <= col ; j ++){
            printf("%d\t",A[i-1][j-1]-B[i-1][j-1]);
        }
        puts("");
    }
}



