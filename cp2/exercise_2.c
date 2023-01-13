#include <stdio.h> 
char name[30]  ; 
char id[10];
int age ; 
char major[5];
float gpa ;

int main(){
gets(name);
scanf("%s %d %s %f",&id,&age,&major,&gpa);

printf("My name is %s and student id is %s \n I am %d year old and study %s\nMy GPA is %f",name,id,age,major,gpa);

}
