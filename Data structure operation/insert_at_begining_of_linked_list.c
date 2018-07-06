#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head; //Globally we have declared the head so that we can access to head from anywhere of the
//program
void insert_number(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); //dynamically allocate the memory
    temp->data = x; // data add to Node
    temp->next = head; //this contains the link information ...Initially head is NULL
    head = temp; //If you add data the head value will contain the temp Node address
}
void display()
{
    struct Node* temp = head;
    printf("List contains: ");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next; // pointing the next Node
    }
    printf("\n");
}
int main()
{
    head = NULL;
    int number,i, x;
    printf("Enter the size of the list\n");
    scanf("%d", &number);
    for(i=0; i<number; i++ )
    {
        printf("Enter Number to Insert\n");
        scanf("%d",&x);
//to insert number at beginning
        insert_number(x);
//To print the whole list. where the last entered data will be in first position of the list
        display();
    }
    return 0;
}
