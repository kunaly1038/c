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

void insertBegin(int data){
		struct node * node;
		node = createNode();
		node->data = data;
		node->next = NULL;
		node->next = start;
		start = node;
}

void printList(){
	struct node * node;
	node  = start;
	while(node != NULL){
		printf("%d\t->",node->data);
		node = node->next;
	}
	printf("NULL  ");
}
void main(){
	insertBegin(5);
	insertBegin(6);
	insertBegin(7);
	
	printList();
}
