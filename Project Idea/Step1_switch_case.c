//CSE-134(AM) Fall 2016
#include <stdio.h>
int array[10];
int main ()
{

    int choice;

    printf("\t STUDENT MANAGEMENT SYSTEM\n\n" );
    printf("\t1. Add Information\n" );
    printf("\t2. Display Information\n" );
    printf("\t3. Delete Iformation\n" );
    printf("\t4. Search Information\n" );
    printf("\t5. Exit\n\n" );

    printf("\tEnter Your Choice\n\t" );

    scanf("%d", &choice);

    switch(choice)
    {
    case 1 :
//printf("Add Information\n" );
        insert_student();
        break;
    case 2 :

        printf("\tDisplay Information\n" );
//display();
        break;
    case 3 :
        printf("\tEnter id to Delete Data\n" );
//delete_student();
        break;
    case 4 :
        printf("\tEnter id to Search Data\n" );
//search_student();
        break;
    case 5 :
        exit(1);
        break;
    default :
        printf("\tInvalid grade\n" );
    }


    return 0;
}


void insert_student()
{
    char response;
    int data, i=0, x;
    do
    {

        printf("\tAdd Information\n\t" );
        scanf("%d", &data);
        array[i] = data;
        i++;
        printf("\tNow List Contains: \n\t");
        for (x= 0; array[x]!=NULL; x++)
        {
            printf("%d ", array[x]);
        }
        printf("\n\tDo you want to continue(y/n)\n\t" );

        getchar();
        response = getchar();
    }
    while(response == 'y'|| response == 'Y' );

}
