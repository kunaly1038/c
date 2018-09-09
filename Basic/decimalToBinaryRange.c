#include<stdio.h>

void binaryNumber(int num){
	int temp =0, result = 0 , rem= 0, i=1;
	temp = num;
	while(num!=0){
		rem = num % 2;
		result = result + rem  * i ;
		num = num / 2;
		i = i * 10;
	}
	printf("%d : %d",temp, result);
	printf("\n");
}

void main(){
	int num, i;
	printf("Enter the range :");
	scanf("%d",&num);
	for(i=0; i<num; i++){
	 	binaryNumber(i);
}	
}
