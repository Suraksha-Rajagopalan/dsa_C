#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}node;

node *head;

void enqueue(int ele){
	 node *newNode = (node *)malloc(sizeof(node));
	 if (head!=NULL){
	     node *ptr = head;
	     while(ptr->next!=NULL)
	         ptr=ptr->next;
	     newNode->data = ele;
	     newNode->next = NULL;
	     ptr->next = newNode;
	 }
	 else{
	     newNode->data = ele;
	     newNode->next = NULL;
	     head = newNode;
	 }
	 printf("\n Enqueue Operation Successful\n");
}

void dequeue(){
	if(head!=NULL){
	node *ptr=head->next;
	printf("\n%d is dequeue out: \n", head->data);
	free(head);
	head = ptr;
     }
     else
     printf("\nQueue Underflow!!\n");

}

void display(){
	if(head == NULL)
	printf("\nNo element found. Queue is empty. Press 1 to create one.\n");
	else
	{
		printf("Elements of the Queue List are: ");
		node *ptr = head;
		while(ptr->next!=NULL)
		{
			printf("%d ", ptr->data);
		    ptr = ptr->next;
		}
	    printf("%d \n", ptr->data); //to print the value of the last node as the above loop terminates at the last node.
    }
}

int main(){
	
	head = (node *) malloc(sizeof(node));
	printf("Enter the element at the head node to create the queue: ");
	scanf("%d", &head->data);
	int ch;
	printf("\n======================================================");
    printf("\nMENU:\n1. Enqueue.\n2. Dequeue.\n3. Display all elements of the queue.\n4. Exit.\n");
	printf("======================================================");
    printf("\n Enter your choice: ");
    scanf("%d", &ch);
    while(ch!=4)
	{
		switch(ch)
		{
		case 1: printf("Enter the element you want  to enqueue: "); int ele;  scanf("%d", &ele); enqueue(ele); break;
		case 2: dequeue();break;
	    case 3: display(); break;
		default: printf("Enter a valid input!!"); break;
	   } 
	   printf("\nEnter your new choice: ");
	   scanf("%d", &ch);
	}
    printf("\nG00D-BY3 ;)");
	return 0;
}
