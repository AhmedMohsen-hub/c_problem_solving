#include<stdio.h>

int sum_arr(int *arr);
int main(){

	// c program to calculate sum of arr using ptr as arg
	static int arr[5]={1,2,3,4,5};
	
	printf("sum=%d",sum_arr(arr));















	return 0;
}
int sum_arr(int *arr){
	int i,sum=0;
	for(i=0;i<5;i++){
		sum += *(arr +i);
	
	
	}

	return (sum);


}