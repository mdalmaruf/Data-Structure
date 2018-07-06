//insert data at the nth position of the linked list. section j,p -maruf
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head; //Globally we have declared the head so that we can access to head from anywhere of the
//program
void insert_nth_position(int data, int n)
{
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node)); //dynamically allocate the memory
    temp1->data = data;
    temp1->next = NULL;
    if(n == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    struct Node* temp2 =head;
    int i;
    for(i =1; i<n-1; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
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
    insert_nth_position(2,1);
    insert_nth_position(3,2);
    insert_nth_position(4,1);
    insert_nth_position(5,2);
    display();
    return 0;
}
