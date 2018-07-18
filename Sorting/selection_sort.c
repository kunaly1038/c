#include <stdio.h>

void insertArray(int [],int);
void printArray(int [], int);
void selectionSort(int [],int);

void main(){
	int x;
	int array[x];
	printf("Enter the size of array :");
	scanf("%d",&x);
	insertArray( array, x);
	selectionSort(array,x);
	printArray(array,x);
}

void insertArray(int array[],int x){
	int i;
	for(i=0;i<x;i++){
		scanf("%d",&array[i]);
	}
}
void printArray(int array[],int x){
	int i;
	for(i=0;i<x;i++){
	printf("%d",array[i]);
	}
}

void selectionSort(int array[],int x){
	int i,j,temp,min;
	for(i=0;i<x;i++){
		min = i;
		for(j=i+1;j<x;j++){
			if(array[j]<array[min]){
				min=j;
		}
	}
	temp = array[min];
	array[min]= array[i];
	array[i] = temp;
		
		
	}
}
