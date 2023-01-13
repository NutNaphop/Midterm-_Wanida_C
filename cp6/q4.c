#include <stdio.h>

int main(){
    int num ; 
    int matrix[4][3];
    for (int i = 1 ; i <= 4 ; i ++){
        for (int j = 1 ; j <= 2 ; j ++){
            scanf("%d",&matrix[i-1][j-1]);
        }
    }
    for (int i = 1 ; i <= 4 ; i ++){
        for (int j = 1 ; j <= 2 ; j ++){
            printf("%d\t",matrix[i-1][j-1]);
        }
        puts("");
    }
}