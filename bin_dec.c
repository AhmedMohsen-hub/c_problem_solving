#include<stdio.h>

int main(){
	int num,decimal_num=0,base=1,rem;
	printf("ENTER binary num");
	scanf("%d",&num);
	
	while(num>0){
		rem=num%10;
		decimal_num=decimal_num+rem*base;
		num /= 10;
		base *=2;
	
	
	
	
	}
	printf("decimal number =%lx",decimal_num);




	return 0;
}