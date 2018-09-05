#include<stdio.h>
#include<stdlib.h>

struct stack{
	int data;
	struct stack * next;
};

struct stack * start;

struct stack * createStack(){
	struct stack * node;
	node = (struct stack *)malloc(sizeof(struct stack));
	return (node);
}

void popStack(){
	struct stack * node, * node2;
	node = start;
	if(start == NULL){
		printf("Stack is Empty.");
	}
	else{
		node = start;
		start = node->next;
	}
}

void pushStack(){
	int data =0 ;
	struct stack * node;
	node =  createStack();
	printf("Enter the Element:");
	scanf("%d",&data);
	node->data = data;
	node->next = NULL;
	node->next = start;
	start = node;
}

void printStack(){
	struct stack * node;
	node = start;
	while(node!=NULL){
		printf("%d\n",node->data);
		node = node->next;
	}
}

int userChoice(){
	int choice = 0;
	printf("1:Push element\n");
	printf("2:Pop element\n");
	printf("3:Print Stack\n");
	printf("Press any key to exit\n");
	scanf("%d",&choice);
	return (choice);
}

void main(){
	int data = 0; 
	while(1){
		printf("Enter your choice:\n");
			switch(userChoice()){
				case 1:
					pushStack();
					break;
				case 2:
					popStack();
					break;
				case 3:
					printStack();
					break;
				case 4:
					printf("You choice to exit");
					exit(0);
					break;
		}
	}
}
