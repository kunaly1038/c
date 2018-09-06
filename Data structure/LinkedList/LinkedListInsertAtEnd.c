#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};

struct node * start ;

struct node * createNode(){
	struct node * node = (struct node *)malloc(sizeof(struct node));
	return (node);
}
void insertAtEnd(int data){
	struct node * node, * node2;
	node =  createNode();
	node->data = data;
	node->next = NULL;
	if(start == NULL){
		start = node;
	}
	else{
		node2 = start;
		while(node2->next!=NULL){
			node2 = node2->next;
		}
		node2->next = node;
	}
}

void printList(){
	struct node * node;
	node = start;
	while(node!=NULL){
		printf("%d\n",node->data);
		node = node->next;
	}
}


void main(){
	insertAtEnd(1);
	insertAtEnd(2);
	insertAtEnd(3);
	insertAtEnd(4);
	printList();	
}
