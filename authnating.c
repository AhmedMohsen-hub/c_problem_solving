#include<stdio.h>



int main(){
	char user_name[10],password[10],ch,i ;
	printf("Enter user_name\n");
	gets(user_name);
	printf("Enter password less 8 charcters\n");
	for(i=0;i<8;i++){
		ch=getchar();
		password[i]=ch;
		ch='*';
		printf("%c",ch);
	
	}
	password[i]='\0';
	printf("\n Your password is:");
	for(i=0;i<8;i++){
		printf("%c",password[i]);
	}
	
	
	 

	return 0;
}
