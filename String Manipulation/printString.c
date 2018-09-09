#include<stdio.h>

void main(){
	char str[100];
	int i=0;
	printf("Enter the string :");
	gets(str);
	printf("Entered String is :");
	for(i=0; str[i]!='\0'; i++){
		printf("%c", str[i]);
	}
}
