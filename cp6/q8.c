#include <stdio.h>
int main(){
    int employ[10] = {10000,15000,30000,25000,9800,12000,15000,22000,31000,50000};
    int max = 0 ;
    int max_em = 0 ;
    for (int i = 0 ; i < 10 ; i ++){
        if(employ [i] > max){
            max = employ[i];
            max_em = i + 1;
        }
    }
    printf("Result \n");
    printf("No. Person : %d\n",max_em);
    printf("Salary : %d ",max);
}