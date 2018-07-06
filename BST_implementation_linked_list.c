//data structure Tree implementation 2016 k-section
//Understanding the source code you have to implement the search function
//Implement the In-order Traversal function
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
typedef struct node Node;
void insert(Node **tree,int val)
{
    Node *temp = NULL;
    if(*tree == NULL)
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }
    if(val <= (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }
}
void display(Node * tree)
{
    if (tree!=NULL)
    {
        printf("%d\n",tree->data);
        display(tree->left);
        display(tree->right);
    }
}
int main(void)
{
    Node *tree;
    tree = (Node *) malloc(sizeof(Node));
    tree->data = 10;
    tree->right=NULL;
    tree->left=NULL;
    insert(&tree,5);
    insert(&tree,3);
    insert(&tree,6);
    insert(&tree,2);
    insert(&tree,8);
    insert(&tree,9);
    insert(&tree,12);
    insert(&tree,1);
// your code goes here more
    display(tree);
    return 0;
}
