// #include <stdio.h>
// int i , j ; 
// int main(){
//     i = 1 ; 
//     do {
//         for (j=i ; j <= 10 ; j ++ )
//             printf("%d",j);
//         printf("\n");
//         i += 2 ;
//     }while(i<=10);
// }

// #include <stdio.h>
// int main(){
//     for(int i = 1 ; i <= 20 ; i += 2){
//         printf("%d\n",i);
//     }
// }

// #include <stdio.h>
// int main(){
//     int row ; 
//     scanf("%d",&row);
//     for (int i = 1 ; i <= row ; i ++){
//         for (int j = 1 ; j <= row ; j ++){
//             if (i == j){
//                 putchar('1');
//             }
//             else{
//                 putchar('0');
//             }
//         }
//         puts("");
//     }
// }
// #include <stdio.h>
// int main(){
//     for (int i = 5 ; i > 0 ; i --){
//         for (int j = 1 ; j <=i ; j ++){
//             printf("%d",i);
//         }
//     puts("");
//     }

// }

#include <stdio.h>
int main(){
    // 1 st 
    for(int i = 1 ; i <= 5 ; i ++ ){
        for (int j = 1 ; j <= i ; j ++){
            putchar('*');
        }
        puts("");
    }
    // 2 nd
    for (int i = 1 ; i <= 5 ; i ++){
        for(int j = 5 ; j > i ; j --){
            printf(" ");
        }
        for(int k = 1 ; k <= i ; k ++){
            putchar('*');        }
            puts("");
    }
    // 3 nd 
    for (int i = 1 ; i <= 5 ; i ++){
        for (int j = 5 ; j >= i ; j --){
            putchar('*');
        }
        puts("");
    }
    // 4 nd 
    for (int i = 1 ; i <= 5 ; i ++){
        for (int j = 1 ; j <= i ; j ++){
            printf(" ");
        }
        for (int k = 5 ; k >= i ; k --){
            putchar('*');
        }
        printf("\n");
    }
}