//Section : 'k'
#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student s;
    printf("Enter information of students:\n\n");
    printf("Enter name: ");
    scanf("%s",s.name);
    printf("Enter roll number: ");
    scanf("%d",&s.roll);
    printf("Enter marks: ");
    scanf("%f",&s.marks);
    printf("\nDisplaying Information\n");
    printf("Name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    printf("Marks: %.2f\n",s.marks);
    return 0;
}
/*---------self referential Structure-----------
* Self-referential structures contain a pointer member that points to a structure of the same structure type.
* ptr is a pointer member of the structure which is a pointer to the same structure in which it is declared.
*Example: linked lists, queues, stacks
struct node
{
char name[50];
struct node *ptr;
};
*/
