#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct bst{
	int data;
	struct bst * left, * right;
};

struct bst * createNode(int data){
	struct bst * node;
	node = (struct bst *)malloc(sizeof(struct bst));
	node->data = data;
	node->left = node->right = NULL;
	return node;
}

struct bst * insertNode(struct bst * node, int data){
	if(node==NULL)
		node = createNode(data);
	
	else if(data < node->data)
		node->left = insertNode(node->left, data);
		
	else if(data > node->data)
		node->right = insertNode(node->right, data);
		
	return node;
}

void printNode(struct bst * node){
	if(node!=NULL){
		printNode(node->left);
		printf("%d\n",node->data);
		printNode(node->right);
	}
}

bool Search(struct bst * node, int data){
	if(node == NULL)
		return false;
	else if(node->data == data)
		return true;
	else if(data < node->data)
		return Search(node->left, data);
	else if(data > node->data)
		return Search(node->right, data);
}

void main(){
	int data ;
	struct bst * root = NULL;
	root = insertNode(root, 1);
	insertNode(root, 2);
	insertNode(root, 3);
  printf("Enter the data you want to search :");
  scanf("%d",&data);
	if(Search(root, data) == true)
		printf("data found!");
	else
		printf("data not found!");
}
