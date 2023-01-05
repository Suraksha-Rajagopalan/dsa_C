#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node * next;
};

struct node * head;

void DeleteAtBegin(){
	struct node *ptr, *t;
	ptr = head;
	t = head;
	while(ptr->next!=head){
		ptr = ptr->next;
	}
	ptr->next = head->next;
	head = t->next;
	free(t);
}

void Deletemid(){
	struct node *ptr, *t;
	int dat;
	ptr = head;
	printf("Enter the data to be deleted(DeleteMid) in the linked list: ");
	scanf("%d", &dat);
	while(ptr->next->data!=dat){
		ptr = ptr->next;
	}
	t = ptr->next;
	ptr->next = t->next;
	free(t);
}

void DeleteEnd(){
	struct node *ptr, *t;
	ptr = head->next;
	while(ptr->next->next!=head){
		ptr = ptr->next;
	}
	t = ptr->next;
	ptr->next = head;
	free(t);
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

void Insertend(){
	struct node * ptr, *newnode;
	int dat;
	ptr = head;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &dat);
	while(ptr->next!=head){
		ptr = ptr->next;
	}
	newnode->data=dat;
	newnode->next = head;
	ptr->next = newnode;
}

int main(){
	int n, dat;
	printf("Enter the number of nodes to be created in the circular list: ");
	scanf("%d", &n);
	head = (struct node *)malloc(sizeof(struct node));
	printf("Enter the value of head node: ");
	scanf("%d", &dat);
	head->data = dat;
	head->next = head;
	for (int i = 1; i<n; i++){
		Insertend();
		printf("\nCurrent Linked list:\n");
		Traversal();
	}
	DeleteAtBegin();
	Traversal();
	Deletemid();
	Traversal();
	DeleteEnd();
	Traversal();
	return 0;
}
