#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node * prev;
	struct node * next;
};
struct node *head;

void Push(){
	struct node * newnode, *ptr;
	ptr = head;
	int val;
	newnode = (struct node *)malloc(sizeof(struct node));
		printf("Enter the value to be inserted at stack: ");
		scanf("%d", &val);
		newnode->data = val;
		if (head == NULL){
			newnode->prev = NULL;
			newnode->next = NULL;
			head = newnode;
		}
		else{
			while(ptr->next!=NULL){
				ptr = ptr->next;
			}
			newnode->next = NULL;
			newnode->prev = ptr;
			ptr->next = newnode;
		} 
}

void Pop(){
	if (head == NULL){
		printf("Stack Underflow\n");
	}
	else{
		struct node * ptr, *temp;
		ptr = head;
		while(ptr->next!=NULL){
			ptr = ptr->next;
		}
		temp = ptr;
		ptr = ptr->prev;
		ptr->next = NULL;
		printf("%d\n", temp->data);
		free(temp);
	}
}

void Peek(){
	struct node *temp;
	temp = head;
	while(temp!=NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
}


int main(){
	int ch;
	printf("\t\tMENU\n");
	printf("\t1. PUSH\n");
	printf("\t2. POP\n");
	printf("\t3. PEEK\n");
	printf("\t4. EXIT\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	while(ch!=4){
		switch(ch){
			case 1:
			    Push();
			    break;
			case 2:
			    Pop();
			    break;
			case 3:
			    Peek();
			    printf("\n");
			    break; 
			default:
			    printf("\nEnter the valid input\n");
			}
			printf("Enter your choice: ");
			scanf("%d", &ch);
	}
	return 0;
}
