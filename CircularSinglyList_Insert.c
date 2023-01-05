#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head;

void InsertionAtBegin(){
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	struct node *ptr;
	ptr = head;
	int dat;
	printf("Enter the data to be inserted at the begining: ");
	scanf("%d", &dat);
	while(ptr->next!=head){
		ptr = ptr->next;
	}
	newnode->data = dat;
	newnode->next = head;
	ptr->next = newnode;
	head = newnode;
}

void InsertAtMid(){
	int dat, val;
	struct node *newnode, *ptr;
	ptr = head;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("Enter the data after which the data has to be inserted: ");
	scanf("%d", &val);
	printf("Enter the data to be inserted: ");
	scanf("%d", &dat);
	newnode->data = dat;
	while((ptr->next)->data == val){
		ptr = ptr->next;
	}
	newnode->next = ptr->next;
	ptr->next = newnode;
}

void InsertAtEnd(){
	struct node * ptr, *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	int dat;
	printf("Enter the data to be inserted a the end of the list: ");
	scanf("%d", &dat);
	ptr = head;
	while(ptr->next!=head){
		ptr = ptr->next;
	}
	newnode->data = dat;
	newnode->next = head;
	ptr->next = newnode;
}

void Traversal(){
	struct node*ptr;
	ptr = head;
	printf("%d ", head->data);
	ptr = ptr->next;
	while(ptr!=head){
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

int main(){
	struct node *ptr, *newnode;
	int dat, n;
	printf("Enter the number of nodes: ");
	scanf("%d", &n);
	if (head==NULL){
		head = (struct node *)malloc(sizeof(struct node));
		printf("Enter data for head node: ");
	    scanf("%d", &dat);
		head->data = dat;
		head->next = head;
	}
	for (int i = 1; i<n; i++){
		ptr = head;
		printf("Enter data: ");
	    scanf("%d", &dat);
		newnode = (struct node *)malloc(sizeof(struct node));
		while(ptr->next!=head){
			ptr = ptr->next;
		}
		newnode->data = dat;
		newnode->next = head;
		ptr->next = newnode;
	}
	Traversal();
	InsertionAtBegin();
	Traversal();
	InsertAtMid();
	Traversal();
	InsertAtEnd();
	Traversal();
	return 0;
}
	
