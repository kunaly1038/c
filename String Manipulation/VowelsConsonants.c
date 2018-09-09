#include<stdio.h>

void main(){
	char str[100];
	int i = 0, count = 0;
	printf("Enter the String :");
	gets(str);
	printf("\n");
	printf("Vowels :");
	for(i=0; str[i]!='\0'; i++){
		if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='o' || str[i]=='O' || str[i]=='U' || str[i]=='u' ){
			printf("%c",str[i]);
			count++;
		}
	}
	printf("\n");
	printf("Number of vowels in string :%d",count);
	printf("\n");
	count = 0;
	printf("Consotnants :");
	for(i=0; str[i]!='\0'; i++){
		if(!(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='o' || str[i]=='O' || str[i]=='U' || str[i]=='u' )){
			printf("%c",str[i]);
			count++;
		}
	}
	printf("\n");
	printf("Number of Consonants in string :%d",count);
}
