#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
struct node *next;
};

struct node * head;

void traveral(){
	struct node *new;
	new = head;
	while(new!=NULL){
		printf("%d ", new->data);
		new = new->next;
	}
}

void insertnodeMiddle(){
	struct node * new, *ptr, *temp;
	new = head;
	ptr = (struct node *)malloc(sizeof(struct node));
	int val, ele;
	printf("Enter the element after which the element has to be inserted: ");
	scanf("%d", &ele);
	while((new->next)->data !=ele){
		new = new->next;
	}
	printf("Enter the data to be inserted: ");
	scanf("%d", &val);
	temp = new->next->next;
	ptr->data = val;
	ptr->next = temp;
	new->next->next = ptr;
}
	

int main(){
	head = (struct node *)malloc(sizeof(struct node));
	struct node *temp, *newnode;
	int n, dat;
	if (head==NULL){
		printf("Unable to locate memory");
		exit(0);
	}
	printf("Number of nodes: ");
	scanf("%d", &n);
	printf("Enter the data of the head node: ");
	scanf("%d", &dat);
	head->data = dat;
	head->next = NULL;
	newnode = head;
	for (int i=1; i<n; i++){
		temp = (struct node *)malloc(sizeof(struct node));
		if (temp == NULL){
			printf("Unable to locate memory");
			exit(0);
		}
		printf("Enter the data of the node: ");
	    scanf("%d", &dat);
	    temp->data = dat;
	    temp->next = NULL;
	    newnode->next = temp;
	    newnode = newnode->next;
	}
	traveral();
	insertnodeMiddle();
	traveral();
	
	return 0;
}
