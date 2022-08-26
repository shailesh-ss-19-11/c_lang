// collection of different data types
// three items name 
// prices 
// weight 

#include<stdio.h>
#include<string.h>

struct students
{
    int id;
    char name[50];
}student1,student2,student3;

int main(){

    printf("enter id and name of student :");
    scanf("%d%s",&student1.id,&student1.name);

    printf("student id is: %d\n",student1.id);
    printf("name is :%s\n",student1.name);
}