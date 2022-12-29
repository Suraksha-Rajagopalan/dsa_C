#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
struct node * prev;
struct node *next;
};

struct node * head;

int main(){
	struct node *ptr, *temp;
	head = (struct node *)malloc(sizeof(struct node));
	int dat, n;
	printf("Enter the number of nodes: ");
	scanf("%d", &n);
	if (head==NULL){
		printf("Unable to locate memory");
		exit(0);
	}
	printf("Enter the data to be inserted at the head node: ");
	scanf("%d", &dat);
	head->data = dat;
	head->prev = NULL;
	head->next = NULL;
	ptr = head;
	for (int i=1; i<n; i++){
		temp = (struct node *)malloc(sizeof(struct node));
		printf("Enter the data of the node: ");
		scanf("%d", &dat);
		temp->data = dat;
		temp->prev = ptr;
		temp->next = NULL;
		ptr->next = temp;
		ptr = ptr->next;
	}
	struct node *new;
	new = head;
	while(new!=NULL){
		printf("%d ", new->data);
		new = new->next;
	}
	printf("\n");
	return 0;
} 
