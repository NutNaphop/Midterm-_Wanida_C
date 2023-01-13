#include <stdio.h>

int main(){
    int row , col ; 
    printf("Row :");
    scanf("%d",&row);
    printf("Column : ");
    scanf("%d",&col);
    int A [row][col] ;
    int B [row][col] ;

    puts("****Input Matrix A ****");
    for (int i = 1 ; i <= row ; i ++){
        for (int j = 1 ; j <= col ; j ++ ){
            printf("Matrix A at [%d][%d] : ",i,j);
            scanf("%d",&A[i-1][j-1]);
        }
    }
    puts("**** Matrix A ****");
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

    puts("**** Result ****");
    for (int i = 1 ; i <= row ; i ++){
        for (int j = 1 ; j <= col ; j ++){
            printf("%d\t",A[i-1][j-1]+B[i-1][j-1]);
        }
        puts("");
    }

}