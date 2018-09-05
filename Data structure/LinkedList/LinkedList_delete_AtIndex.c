#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};

struct node * start = NULL;

struct node * createNode(){
	struct node * node;
	node = (struct node *)malloc(sizeof(struct node));
	return (node);
}

void insertEnd(int data){
	struct node * node, * node2;
	node = createNode();
	node->data = data;
	node->next = NULL;
	if(start == NULL){
		start = node;
	}
	else{
		node2 = start;
		while(node2->next != NULL){
			node2 = node2->next;
		}
		node2->next = node;
	}
}

void insertBegin(int data){
		struct node * node;
		node = createNode();
		node->data = data;
		node->next = NULL;
		node->next = start;
		start = node;
}

void deleteAtBegin(){
	struct node * node;
	if(start == NULL){
		printf("List is Empty");
	}
	else{
		node = start;
		start = start->next;
		free(node);
	}
}

void deleteAtLast(){
	struct node * node, *node2;
	node2 = start;
	if(start == NULL){
		printf("List is Empty");
	}
	else{
		while(node2->next!=NULL){
		
			node = node2;
			node2 = node2->next;
	}
	free(node->next);
	node->next = NULL;	
	}
}

void deleteAtIndex(int index){
	struct node * node, * node2, *node3;
	int i;
	node =  start;
	if(start ==  NULL){
		printf("List is Empty :");
	}
	else{
	for( i =0; i<index; i++){
		node2 = node;
		node = node->next;
	}
	node3 = node->next;
	free(node2->next);
	node2->next = node3;
	
}
}


void printList(){
	struct node * node;
	node  = start;
	if(start == NULL){
		printf("List is Empty");
	}
	else{
			
		while(node != NULL){
			printf("%d\t->",node->data);
			node = node->next;
		}
	}
	printf("NULL  ");
}


void main(){
	insertEnd(1);
	insertEnd(2);
	insertEnd(3);
	insertEnd(4);
	
	insertBegin(5);
	insertBegin(6);
	insertBegin(7);
	
//	deleteAtBegin();

	//deleteAtLast();
	
	deleteAtIndex(3);
	printList();
}
