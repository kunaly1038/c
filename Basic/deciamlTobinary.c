#include<stdio.h>

void binaryNumber(int num){
	int temp, result , rem, i=1;
	temp = num;
	while(num!=0){
		rem = num % 2;
		result = result + rem* i ;
		num = num / 2;
		i = i*10;
	}
	printf("%d",result);
}

void main(){
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	binaryNumber(num);
}
