// c program to convert devimal to binary and count 1s

#include <stdio.h>


int main(){
	long num,rem,base=1,no_1s=0,bin=0;
	
	printf("Enter an decimal num");
	scanf("%ld",&num);
	
	while(num>0){
		rem=num%2;
		if(rem==1){
			no_1s++;
		
		}
		bin=bin+rem*base;
		num /=2;
		base *=10;
		
	
	
	}
	printf("binary =%ld",bin);
	printf("\nnum of 1s =%ld",no_1s);











}