#include<stdio.h>

int  primeNumber(int num){
	int i, flag= 1;
	if(num == 2 || num == 3){
		flag = 0;
	}
	else if(num%2 == 0){
		flag = 0;
	}
	else{
		for(i=3; i<num; i++){
			if(num%i == 0)
			{
				flag = 0;
			}
		}
	}
	return flag;
}

void main(){
	int flag , num = 8;
	printf("Enter the Number You want to check :");
	scanf("%d",&num);
	flag = primeNumber(num);
	printf("\n");
	if(flag == 0){
		printf("No its not Prime Number");
	}
	else if(flag == 1) {
		printf("Yes an Prime Number");
	}
}
