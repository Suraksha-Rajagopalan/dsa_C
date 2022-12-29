#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
struct node * prev;
struct node *next;
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

void Insertbeign(){
	struct node *new;
	new = (struct node *)malloc(sizeof(struct node));
	int dat;
	printf("Enter the data to be inserted at the begining of the linked list: ");
	scanf("%d", &dat);
	new->data = dat;
	new->next = head;
	new->prev = NULL;
	head->prev = new;
	head = new;
}

void InsertEnd(){
	struct node *ptr, *new;
	int dat;
	new = (struct node *)malloc(sizeof(struct node));
	ptr = head;
	while(ptr->next!=NULL){
		ptr = ptr->next;
	}
	printf("Enter the data to be inserted: ");
	scanf("%d", &dat);
	new->data = dat;
	new->next = NULL;
	new->prev = ptr;
	ptr->next = new;
}

void InsertMid(){
	struct node *new, *p, *p_next;
	new = (struct node *)malloc(sizeof(struct node));
	p = head;
	int dat, val; 
	printf("Enter the element after which the data has to be inserted: ");
	scanf("%d", &dat);
	p_next = head->next;
	while(p->data!=dat){
		p = p->next;
		p_next = p_next->next;
	}
	if (p_next==NULL){
		InsertEnd();
		traversal();
		exit(0);
	}
	printf("Enter the data to be inserted: ");
	scanf("%d", &val);
	new->data = val;
	new->prev = p;
	new->next = p_next;
	p_next->prev = new;
	p->next = new;
}

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
	traversal();
	Insertbeign();
	traversal();
	InsertMid();
	traversal();
	InsertEnd();
	traversal();
	return 0;
} 
