#include <stdio.h>

int main()
{
    // c program to check if an integer is odd or even
    int i_num,reminder;
    printf("Enter an input numper");
    scanf("%d",&i_num);

    reminder=i_num % 2;

    if(reminder==0){
        printf("number is even\n");
    }
    else
    {
        printf("number is odd \n ");
    }
    

}