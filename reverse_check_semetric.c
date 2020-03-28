#include <stdio.h>

int main(){
	
	int num,reverse=0,temp,reminder;
	printf("Enter a number");
	scanf("%d",&num);
	
	temp=num;
	
	while(num>0){
		reminder=num%10;
		reverse=reverse*10+reminder;
		num /=10;
	
	
	
	
	
	}
	printf("num =%d and reverse=%d",temp,reverse);
	if(temp==reverse){
		printf("they are sematric");
	}
	else
	{printf("not sematric");}
	











	return 0;
}