#include<stdio.h>

void primeCheck(int num){
		int i, flag= 1;
	if(num == 2 || num == 3){
		flag = 1;
	}
		
	else if(num%2 == 0){
		flag = 0;
	}
 	else{
		for(i=3; i<num/2; i++){
			if(num%i==0){
				flag =0;
			}
		}
	}
	if(flag == 0){
		printf("No :%d",num);
		printf("\n");
	}
	else if(flag == 1){
		printf("Yes :%d",num);
		printf("\n");
	}
}
//flag = 0 means no prime
//flag = 1 means prime
void main(){
	int num, i;
	printf("Enter the Number :");
	scanf("%d",&num);
	for(i=2; i<num; i++){
		primeCheck(i);
	}
	
}
