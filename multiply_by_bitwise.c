#include <stdio.h>

int main()
{
	// c code to multiply a given number by 4 using bitwise operators
	
	long num,tempnum;
	printf("Enter an integer number \n");
	scanf("%ld",&num);
	
	tempnum=num;
	num = num << 2;
	printf("%ld x 4 =%ld",tempnum,num);
	
	// 0000 1100
	//0011 0000










	return 0;
}