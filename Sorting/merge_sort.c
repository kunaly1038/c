#include<stdio.h>
void mergeSort(int [],int  ,int );
void merge(int [], int , int , int );
void populateArray(int[] ,int );
void printArray(int [],int );
void main(){
	int x;int array[50];
	printf("Enter the size of the array :");
	scanf("%d",&x);
	populateArray(array,x);
	mergeSort(array,0,x-1);
	printArray(array,x);

}


void populateArray(int array[], int x){
	int i;
	for (i=0;i<x;i++){
		scanf("%d",&array[i]);
	}
}

void printArray(int array[],int x){
	int i ;
	for (i=0;i<x;i++){
		printf("%d",array[i]);
	}
}


void mergeSort(int array[],int l,int r){
	int m;
	if(l<r){
		m=l+(r-l)/2;
		mergeSort(array,l,m);
		mergeSort(array,m+1,r);
		merge(array,l,m,r);
	}
}
	
void merge(int array[],int l, int m, int r){
	int n1=m-l+1,n2=r-m;
	int left[n1],right[n2];
	int  i,j,k;
	for(i=0;i<n1;i++){
		left[i]=array[l+i];
	}
	for(j=0;j<n2;j++){
		right[j]=array[m+j+1];
	}
	i=0;j=0;k=l;
	while(i<n1 && j<n2){
		if(left[i]<=right[j]){
			array[k]=left[i];
			i++;
			k++;
		}
		else{
			array[k]=right[j];
			j++;
			k++;
		}
	}
	while(i<n1){
		array[k]=left[i];
		i++;
		j++;
	}
	while(j<n2){
		array[k]=right[j];
		j++;
		k++;
	}
}

