#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
struct node * prev;
struct node * next;
};

struct node * head;

void traversal(){
	struct node *new;
	new = head;
	while(new!=NULL){
		printf("%d ", new->data);
		new = new->next;
	}
	printf("\n");
}

void deleteBegin(){
	struct node *ptr;
	ptr = head;
	head = head->next;
	head->prev = NULL;
	free(ptr);
}

void deleteEnd(){
	struct node *ptr, *temp;
	ptr = head;
	while(ptr->next!=NULL){
		ptr = ptr->next;
	}
	temp = ptr;
	temp->prev->next = NULL;
	ptr->prev = NULL;
	free(ptr);
}

void deleteMid(){
	struct node *ptr ,*temp;
	int dat;
	printf("Enter the element to be deleted: ");
	scanf("%d", &dat);
	ptr = head;
	while(ptr->next->data!=dat){
		ptr = ptr->next;
	}
	temp = ptr->next;
	ptr->next = ptr->next->next;
	ptr->next->prev = ptr;
	free(temp);
}

int main(){
	struct node *ptr, *new;
	head = (struct node *)malloc(sizeof(struct node));
	ptr = head;
	if (head==NULL){
		printf("Unable to locate memory");
		exit(0);
	}
	int n, dat;
	printf("Enter the number of nodes: ");
	scanf("%d", &n);
	printf("Enter the head node: ");
	scanf("%d", &dat);
	head->data = dat;
	head->next = NULL;
	head->prev = NULL;
	ptr = head;
	for(int i = 1; i<n; i++){
		new = (struct node *)malloc(sizeof(struct node));
		printf("Enter the data: ");
		scanf("%d", &dat);
		new->data = dat;
		new->next = NULL;
		new->prev = ptr;
		ptr->next = new;
		ptr = ptr->next;
	}
	traversal();
	deleteBegin();
	traversal();
	deleteEnd();
	traversal();
	deleteMid();
	traversal();
	return 0;
}
