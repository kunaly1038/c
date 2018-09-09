#include<stdio.h>

void check(int num){
	int  temp=0, i;
	
		i = num;
		while(num>0){
			temp = num % 10;
			num = num/10;
			if(temp == 1 || temp == 7){
				printf("%d\t",i);
				break;
			}
		}
	
	
}

void main(){
	int num =0,i;
	printf("Enter the Range :");
	scanf("%d",&num);
	for(i=0; i<num ; i++){
		check(i);
	}
}
