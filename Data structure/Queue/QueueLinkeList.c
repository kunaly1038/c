#include<stdio.h>
#include<stdlib.h>

struct queue * createNode();
void enqueue();
void dequeue();
void printQueue();
int size();
int isEmpty();

struct queue{
	int data;
	struct queue * next;
};
struct queue* start;

struct queue * createNode(){
	struct queue * node = (struct queue *)malloc(sizeof(struct queue));
	return (node);
}

void enqueue(){
	struct queue * node;
	int data;
	printf("Enter the element into the Queue:");
	scanf("%d",&data);
	node = createNode();
	node->data = data;
	node->next = NULL;
	node->next = start;
	start = node;
}

void dequeue(){
	struct queue * node, * node2;
	node = start;
	if(size() == 0){
		free(start);
		start = NULL;
	}
	else{
	while(node->next!=NULL){
		node2 =  node;
		node = node->next;
	}
	free(node->next);
	node2->next = NULL;
}}

void printQueue(){
	struct queue * node;
	node = start;
	if(start == NULL){
		printf("Queue is Empty.\n");
	}
	else{
		while(node!=NULL){
			printf("%d\t",node->data);
			node = node->next;
		}
		printf("\n");
    }	
}

int size(){
	int count =0 ;
	struct queue * node;
	node = start;
	if(start == NULL){
		return 0;		
	}
	else{
		while(node->next!=NULL){
		node = node->next;
		count++ ;
	}
	return count;
	}
}

int isEmpty(){
	if(start == NULL)
		return 0;
	else
		return 1;
	
}

int userChoice(){
	int choice=0;
	printf("1:Enqueue\n");
	printf("2:dequeue\n");
	printf("3:printQueue\n");
	printf("4:Size of Queue\n");
	printf("5:Queue is Empty\n");
	printf("6:To exit\n");
	scanf("%d",&choice);
	return (choice);	
}

void main(){
	int ize = 0;
	while(1){
		printf("\nEnter your Choice:\n\n");
		switch(userChoice()){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				printQueue();
				break;		
			case 4:
				ize = size();
				printf("Szie of Queue :%d\n",ize);
				break;
			case 5:
				if(isEmpty()==0)
					printf("Yes\n");
				else
					printf("No\n");
				break;
			case 6:
				printf("you choice to exit.");
				exit(0);
			default:
				printf("Wrong choice.\n");
				
		}
	}
}
