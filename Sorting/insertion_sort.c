#include <stdio.h>

void insertArray(int [],int);
void printArray(int [], int);
void insertionSort(int [],int);

void main(){
	int x;
	int array[x];
	printf("Enter the size of array :");
	scanf("%d",&x);
	insertArray( array, x);
	insertionSort(array,x);
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

void insertionSort(int array[],int x){
	int i,j,key;
	for(i=0;i<x;i++){
		key =  array[i];
		j=i-1;
		while(j>=0 && key<array[j]){
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=key;
	}
}
