#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};

struct nod * creatNode(){
	struct node * node = (struct node *)malloc(sizeof(struct node));
	return (node);
}

void main(){
  createNode();
  printf("Node Created.");
}
