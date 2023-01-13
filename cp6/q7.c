#include <stdio.h>
int main(){
    int matrix[3][3] = {{4,2,1},{-1,3,7},{5,6,8}};
    int det = 0 ;
    int a ;

    for(int i = 0 ; i <3 ; i ++){
        det += matrix[0][i] * (matrix[1][(i+1)%3] * matrix[2][(i+2)%3] -  matrix[1][(i+2)%3] * matrix[2][(i+1)%3]) ;
    }
    printf("Det is %d",det);
}