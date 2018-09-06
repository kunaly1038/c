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

void insert(int data){
		struct node * node;
		node = createNode();
		node->data = data;
		node->next = NULL;
		node->next = start;
		start = node;
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
	insert(5);
	insert(6);
	insert(7);
	deleteAtIndex(3);
	printList();
}
