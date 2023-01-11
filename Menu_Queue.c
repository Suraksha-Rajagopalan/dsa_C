#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};
struct node * head;

void Enqueue(){
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

void Dequeue(){
    if (head==NULL){
        printf("\nThe queue is empty! UNDERFLOW CONDITION!!");
    }
    else{
        if (head->next==NULL){
            head = NULL;
        }
        else{
            struct node *p;
            p = head;
            head = head->next;
            free(p);
        }
        printf("\nDeletion was successful !!");
    }
}

void Display(){
    if (head==NULL){
        printf("\nThe Queue is empty.");
        return;
    }
    else{
        struct node * ptr;
        ptr = head;
        printf("\nThe elements of the Queue is: \n");
        while(ptr!=NULL){
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        }
}

int main(){
    int choice;
    
    do{
    printf("\n1. Enqueue the element into the stack");
    printf("\n2. Dequeue the element of the stack");
    printf("\n3. Display");
    printf("\n4. To exit");
    
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice){
        case 1:
            Enqueue(); 
            break;
        case 2:
            Dequeue();
            break;
        case 3: 
            Display();
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
