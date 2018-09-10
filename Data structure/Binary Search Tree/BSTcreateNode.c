#include<stdio.h>
#include<stdlib.h>

struct BST{
	int data;
	struct BST * left, * right;
};

struct BST * root = NULL;

struct BST * createNode(int data){
	struct BST * node;
	node = (struct BST *)malloc(sizeof(struct BST));
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}

void main(){
	printf("Node created");
}
