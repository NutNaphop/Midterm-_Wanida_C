#include <stdio.h>
int main(){
    char mode; 
    float thai_b ; 
    mode = getchar();
    scanf("%f",&thai_b);
    switch (mode){
        case 'D' :
        printf("Thai To Dollar is %.2f",thai_b*33.46); 
        break;
        case 'Y':
        printf("Thai To Yen is %.2f",thai_b*0.29);
        break;
        case 'K':
        printf("Thai To Won is %.2f",thai_b*35.28);
        break;
        default : 
        printf("Not Found");
    }
}