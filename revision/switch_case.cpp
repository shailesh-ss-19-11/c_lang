// when we want to have an options that time we choose only one choice.

#include<stdio.h>

int main(){
    int choice;

    printf("enter choice :");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Rutika \n");
        break;
    case 2:
        printf("pranita \n");
        break;
    case 3:
        printf("Sonali \n");
        break;
    case 4:
        printf("shailesh \n");
        break;
    default:
        printf("you have entered a wrong choice");
        break;
    }
}