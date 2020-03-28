#include <stdio.h>

int main(){
	int num1,num2,num3;
	printf("Enter num1 &num2&num3");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if ((num1>num2) && (num1>num3)){
		printf("num1 is the biggest");
	
	}
	if ((num2>num1) && (num2>num3)){
		printf("num2 is the biggest");
	
	}
	if ((num3>num2) && (num3>num1)){
		printf("num3 is the biggest");
	
	}












	return 0;
}