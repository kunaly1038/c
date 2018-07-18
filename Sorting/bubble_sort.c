#include <stdio.h>

void insertArray(int [],int);
void printArray(int [], int);
void bubbleSort(int [],int);

void main(){
	int x;
	int array[x];
	printf("Enter the size of array :");
	scanf("%d",&x);
	insertArray( array, x);
	bubbleSort(array,x);
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

void bubbleSort(int array[],int x){
	int i,j,temp;
	for(i=0;i<x-1;i++){
		for(j=0;j<x-i-1;j++){
			if(array[j]>array[i]){
				temp = array[j];
				array[j] =array[i];
				array[i] =temp;
			}
		}
	}
}
