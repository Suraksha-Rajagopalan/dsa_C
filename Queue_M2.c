#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *prev;
	struct node *next;
};

struct node * head;

void Enqueue(){
	struct node *ptr;
	ptr = head;
	int dat;
	printf("Enter the data to be enqueued: ");
	scanf("%d", &dat);
	if (head==NULL){
		head = (struct node *)malloc(sizeof(struct node));
		head->data = dat;
		head->next = NULL;
		head->prev = NULL;
	}
	else{
		struct node * newnode = (struct node *)malloc(sizeof(struct node));
		while (ptr->next!=NULL){
			ptr = ptr->next;
		}
		newnode->data = dat;
		newnode->next = NULL;
		newnode->prev = ptr;
		ptr->next = newnode;
	}
}

void Queue(){
	int font, rear;
	struct node * ptr;
	ptr = head;
	if (head==NULL){
		printf("Empty QUEUE\n");
		font = rear = -1;
	}
	else{
	font = head->data;
	while(ptr!=NULL){
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}		
	printf("\n");
	rear = ptr->data;
}
printf("font: %d\nrear: %d\n", font, rear);
}

void Dequeue(){
	struct node * temp;
	if (head==NULL){
		printf("UNDERFLLOW!!\n");
		printf("Enter elements inorder to dequeue\n");
	}
	else{
		if (head->next == NULL){
			free(head);
			head = NULL;
		}
		else{
			temp = head->next;
		    temp->prev = NULL;
		    head->next = NULL;
		    free(head);
		    head = temp;
		    }
		    printf("DELETION IS SUCCESSFUL\n");
	}
}

int main(){
	int ch;
	printf("===================================================================================================================");
	printf("\n\t\tMENU\n");
	printf("\t\t1. Enqueue\n");
	printf("\t\t2. Dequeue\n");
	printf("\t\t3. Print the Queue\n");
	printf("\t\t4. Exit\n");
	printf("===================================================================================================================");
	printf("\n");
	printf("\nEnter your choice: ");
	scanf("%d", &ch);
	while(ch!=4){
		switch (ch){
			case 1:
			    Enqueue();
			    break;
			case 2:
			    Dequeue();
			    break;
			case 3:
			    Queue();
			    break;
			default:
			    printf("Enter the right choice!!!\n");
			    break;
			}
			printf("\nEnter your choice: ");
	       scanf("%d", &ch);
	   }
	return 0;
}
