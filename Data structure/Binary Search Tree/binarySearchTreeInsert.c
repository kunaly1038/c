#include<stdio.h>
#include<stdlib.h>

struct BST{
	int data;
	struct BST * left, * right;
};

struct BST * root = NULL;

struct BST * createNode(int data){
	struct BST * root;
	root = (struct BST *)malloc(sizeof(struct BST));
	root->data = data;
	root->left = root->right = NULL;
	return (root);
}

struct BST * insert(struct BST * root, int data){
	if(root == NULL)
		root = createNode(data);
	
	else if(data <= root->left)
		root->left = insert(root, data);
		
	else if(data >= root->right)
		root->right = insert(root, data);
		
	return (root);
}

void main(){
	root = insert(root, 1);
	insert(root, 2);
}
