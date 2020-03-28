#include <stdio.h>

int main(){
	// c program to sum &average of array
	
	int arr[]={10,20,30,40,50};
	
	int size_arr= sizeof(arr) / sizeof(arr[0]);
	
	int i,sum=0;
	for(i=0;i<size_arr;i++){
		sum +=arr[i];
	
	
	}
	int average=sum/size_arr;
	printf("sum=%d and average=%d",sum,average);















	return 0;
	
}