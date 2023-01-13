#include <stdio.h>
int main(){
    int salary[12] = {10000,15000,12000,25000,9800,12000,15000,22000,31000,25000,50000,10000};
    int sum = 0 ;
    for(int i = 0 ; i < 12 ; i ++){
        sum += salary[i];
        if(salary[i] > 15000){
            printf("No. Month : %d\n",i+1);
        }
    }
    printf("Total Salary : %d",sum);
}