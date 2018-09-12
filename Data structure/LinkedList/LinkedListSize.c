#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

struct Node * head = NULL;

struct Node * createNode(){
	struct Node * node;
	node = (struct Node *)malloc(sizeof(struct Node));
	return node;
}

void insertAtBegin(int data){
	struct Node * node;
	node = createNode();
	node->data = data;
	node->next = NULL;
	node->next = head;
	head = node;
}

int sizeList(){
	struct Node * node;
	int count = 0;
	node = head;
	while(node->next!=NULL){
		node = node->next;
		count++;
	}
	return count;
}

int main(){
  insertAtBegin(1);
  insertAtBegin(1);
  insertAtBegin(1);
  insertAtBegin(1);
  sizeList();
}
