// c program to calculate sum of odd and even numbers

#include <stdio.h>

int main (){
    // c program to find sum of odd and even numbers from 1 to n
    int N,reminder,sum_odd=0,sum_even=0;
    printf("Enter N:");
    scanf("%d",&N);

    for(int i=1;i<=N;i++){
        reminder=i%2;
        if(reminder==0){
            sum_even += i;
        }
        else
        {
            sum_odd += i;
        }
        
    }
    printf("sum of even=%d \t sum of odd=%d",sum_even,sum_odd);
}