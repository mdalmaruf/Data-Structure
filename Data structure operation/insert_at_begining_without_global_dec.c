#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* insert_number(struct Node* head, int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); //dynamically allocate the memory
    temp->data = x; // data add to Node
    temp->next = head; //this contains the link information ...Initially head is NULL
    head = temp; //If you add data the head value will contain the temp Node address
    return head;
}
void display(struct Node* head)
{
    printf("List contains: ");
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next; // pointing the next Node
    }
    printf("\n");
}
int main()
{
    struct Node* head= NULL;
    int number,i, x;
    printf("Enter the size of the list\n");
    scanf("%d", &number);
    for(i=0; i<number; i++ )
    {
        printf("Enter Number to Insert\n");
        scanf("%d",&x);
//to insert number at beginning
        head = insert_number(head, x);
//To print the whole list. where the last entered data will be in first position of the list
        display(head);
    }
    return 0;
}
