//convert agiven num of days to yers and weeks,days

#include<stdio.h>



int main(){
	long num,yrs=0,weks=0,dys=0;
	printf("Enter agiven days");
	scanf("%ld",&num);
	
	yrs=num / 365;
	weks=(num%365)/7;
	dys=(num%365)%7;
	
	printf("years:%d / tweeks:%d /t days:%d",yrs,weks,dys);




}