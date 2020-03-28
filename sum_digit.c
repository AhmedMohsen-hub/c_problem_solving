#include <stdio.h>

int main(){

	long num,sum=0,digit;
	printf("Enter an integer num");
	scanf("%ld",&num);
	
	while(num>0){
		digit= num % 10;
		sum += digit;
		num /= 10;
	
	
	
	}
	printf("sum of digits = %ld",sum);













}