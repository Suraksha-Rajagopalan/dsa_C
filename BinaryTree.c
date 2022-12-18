#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode()
{
    struct node *p; 
    p = (struct node *) malloc(sizeof(struct node));
    int data;
    scanf("%d", &data);
    if (data == -1)
    {
        return 0;
    }
    p->data = data;
    printf("Enter the left child of %d \n", p->data);
    p->left = createNode();
    printf("Enter the right child of %d \n", p->data);
    p->right = createNode();
    return p;
}

void Inorder(struct node *root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        printf("%d ", root->data);
        Inorder(root->right);
    }
}

void main()
{
    printf("Enter the value of root of the tree: ");
    struct node *root = createNode();
    Inorder(root);
}
