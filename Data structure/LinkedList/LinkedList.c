#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

void insertAtEnd(int data){
	struct Node  * node, * node2;
	node = createNode();
	node->data = data;
	node->next = NULL;
	node2 = head;
	if(head == NULL)
		head = node;
	else{
		while(node2->next!=NULL){
			node2 = node2->next;
		}
		node2->next = node;
	}
}

void insertAtPosition(int index, int data){
	struct Node * node, * node2;
	int i = 0;
	node = createNode();
	node->data = data;
	node->next = NULL;
	node2 = head;
	if(index == 0){
		insertAtBegin(data);
	}
	else{
		for(i=0; i<index-1; i++){
			node2 = node2->next;
		}
		node->next = node2->next;
		node2->next = node;
	}
}

void deleteAtBegin(){
	struct Node * node;
	if(head == NULL){
		printf("List is Empty.");
	}
	else{
		node = head;
		head = node->next;
	}
}

void deleteAtEnd(){
	struct Node * node, *node2;
	if(head == NULL){
		printf("List is Empty.");
	}
	else{
		node2 = head;
		while(node2->next!=NULL){
			node = node2;
			node2 = node2->next;
		}
		free(node->next);
		node->next = NULL;
		
	}
}

void deleteAtPosition(int index){
	int i = 0;
	struct Node * node, * node2, * node3;
	if(head == NULL){
		printf("List is Empty.");
	}
	if(index == 0){
		head = head->next;
	}
	else{
		node2 = head;
		for(i=0; i<index-1; i++){
			node2 = node2->next;
		}
		node2->next = node2->next->next;
		//node = node2->next;
		//node2-next = node->next;
	}
}

void printList(){
	struct Node * node;
	if(head == NULL){
		printf("List is Empty.");
	}
	else{
		node = head;
		while(node!=NULL){
			printf("%d\n",node->data);
			node = node->next;
		}
	}
}

void reverseList(){
	struct Node * prev = NULL, * curr, * nex = NULL;
	curr = head;
	while(curr!=NULL){
		nex= curr->next;
		curr->next = prev;
		prev = curr;
		curr = nex;
	}
	head = prev;
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

int sumList(){
	struct Node * node;
	int data = 0;
	node =  head;
	while(node!=NULL){
		data = data + node->data;
		node = node->next;
	}
	return data;
}

int userChoice(){
	int choice;
	printf("1:Insert At Begin\n");
	printf("2:Insert At End\n");
	printf("3:Insert At Position\n");
	printf("4:Delete At Begin\n");
	printf("5:Delete At End\n");
	printf("6:Delete At Position\n");
	printf("7:Reverse Linked List\n");
	printf("8:Size of List\n");
	printf("9:Sum of List\n");
	printf("10:Print LinkedList\n");
	printf("Enter You choice :\n");
	scanf("%d",&choice);
	return choice;	
}

int main(){
	int data, index;
	while(true){
		data = 0;index = 0;
		switch(userChoice()){
			case 1 :
				printf("Enter the data :");
				scanf("%d",&data);
				insertAtBegin(data);
				printf("\n");
				break;
			case 2 :
				printf("Enter the data :");
				scanf("%d",&data);
				insertAtEnd(data);
				printf("\n");
				break;
			case 3 :
				printf("Enter the data :");
				scanf("%d",&data);
				printf("Enter the index :");
				scanf("%d",&index);
				insertAtPosition(index, data);
				printf("\n");
				break;
			case 4 :
				deleteAtBegin();
				break;
			case 5 :
				deleteAtEnd();
				break;
			case 6 :
				printf("Enter the index :");
				scanf("%d",&index);
				deleteAtPosition(index);
				break;
			case 7 :
				reverseList();
				printf("Now the List Look like :");
				printList();
				break;
			case 8 :
				printf("The Size of List is :%d",sizeList());
				break;
			case 9 :
				printf("The sum of List is : %d",sumList());
				break;
			case 0:
				exit(0);
			case 10:
				printList();
				break;
			default:
				printf("Invalid Choice!");
				break;
			
		}
	}
	return 0;
}
