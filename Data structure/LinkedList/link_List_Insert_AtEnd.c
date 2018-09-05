#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	int data;
	struct node *next;
};

struct node *START=NULL;

struct node* createNode(){
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	return(n);
}

void insertNode(){
	struct node *temp,*t;
	temp=createNode();
	printf("Enter a number :");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(START==NULL){
		START=temp;
	}
	else{
		t=START;
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=temp;  
	}
}


void deleteNode(){
	struct node *r;
	if (START==NULL){
	printf("List is empty");	
	}
	else{
		r=START;
		START=START->next;
		free(r);
	}
}

void viewList(){
	struct node *t;
	if(START==NULL){
		printf("List is emppty");
	}
	else{
	 t=START;
	 while(t!=NULL){
	 	printf("%d\n",t->data);
	 	t=t->next;
	 }
}
}

int choice(){
	int  ch;
	printf("\n1:Enter for Insertion ");
	printf("\n2:Enter for Deletion ");
	printf("\n3:Enter for Print ");
	printf("\n4:Exit");
	scanf("%d",&ch);
	return(ch);
}

int main(){
	
	while(1){
		printf("Enter you choice :");
		switch(choice()){
			case 1:
				insertNode();
				break;
			case 2:
				deleteNode();
				break;
			case 3: 
				viewList();
				break;
			case 4:
				exit(0);
			default :
				printf("Invalid choice");
		}
		getch();
	}clrscr();
	return 0;
}

