// c program to swap contents of 2 numbers by bitwise xor operator


#include <stdio.h>

int main()
{
	int num1,num2;
	printf("Enter two integer numbers\n");
	scanf("%d%d",&num1,&num2);
	
	//0000 0010
	//0000 0001
	
	num1= num1 ^ num2;
	num2=num1 ^ num2;
	num1=num1 ^ num2;
	
	printf("num1=%d num2=%d",num1,num2);



}