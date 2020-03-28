#include <stdio.h>
#include <malloc.h>

int main(){

	// c program to find sum of arr using pointer
	int *ptrarr;
	int sum=0;
	int i=0,n;
	printf("Enter sizeof arr \n");
	scanf("%d",&n);
	ptrarr=(int*)malloc(n *sizeof(int));
	printf("Enter elements of array\n");
	while(i<n){
		scanf("%d",ptrarr+i);
		i++;
	}
	for(i=0;i<5;i++){
	
		sum =sum + *(ptrarr+i);
	
	
	
	
	
	}
	printf("sum=%d",sum);
















	return 0;
}