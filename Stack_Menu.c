#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};
struct node * head;

void Push(){
    struct node *ptr, *new;
    ptr = head;
    int dat;
    printf("Enter the data: ");
    scanf("%d", &dat);
    if (head==NULL){
        head = (struct node *)malloc(sizeof(struct node));
        head->data = dat;
        head->next = NULL;
    }
    else{
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        new = (struct node *)malloc(sizeof(struct node));
        new->data = dat;
        new->next = NULL;
        ptr->next = new; 
    }
    printf("\nData entered");
}

void Pop(){
    if (head==NULL){
        printf("\nThe stack is empty!UNDERFLOW CONDITION!!");
    }
    else{
        if (head->next==NULL){
            head=NULL;
            printf("\nDeletion was successful");
            return;
        }
        struct node *ptr, *temp;
        ptr = head;
        while(ptr->next->next!=NULL){
            ptr = ptr->next;
        }
        temp = ptr->next;
        ptr->next = NULL;
        free(temp);
        printf("\nDeletion was successful");
    }
}

void Peek(){
    if (head==NULL){
        printf("\nThe STACK is empty.");
    }
    else if (head->next==NULL){
        printf("\nThe top most element is: %d", head->data);
    }
    else{
        struct node * ptr;
        ptr = head;
        while(ptr->next==NULL){
            ptr = ptr->next;
        }
        printf("\nThe top most element of the stack is: %d", ptr->data);
        }
}

int main(){
    int choice;
    
    do{
    printf("\n1. Push the element into the stack");
    printf("\n2. Pop the element of the stack");
    printf("\n3. Peek(See the top most element of the stack)");
    printf("\n4. To exit");
    
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice){
        case 1:
            Push(); 
            break;
        case 2:
            Pop();
            break;
        case 3: 
            Peek();
            break;
        case 4:
            break;
        default:
           printf("\nEnter a valid choice");
           break;
    }
    }while(choice!=4);
    printf("\n\nThank you!!! :)");
    return 0;
}
