//CSE-134(AM) Fall 2016
#include <stdio.h>
struct student
{
    char name[50];
    int height;
};
int main()
{
    struct student stud1[5], stud2[5];
    FILE *fptr;
    int i;
    fptr = fopen("Student_file.txt","wb");
    printf("\t\t Student Information System: \n\n");
    for(i = 0; i < 3; ++i)
    {
        fflush(stdin);
        printf("\tEnter Studnet name: ");
        gets(stud1[i].name);
        printf("\tEnter Student height: ");
        scanf("\t%d", &stud1[i].height);
        fprintf(fptr, " %s %d", stud1[i].name, stud1[i].height);
    }
//fwrite(stud1, sizeof(stud1), 1, fptr);
    fclose(fptr);
    fptr = fopen("Student_file.txt", "rb");
    /*
    fread(stud2, sizeof(stud2), 1, fptr); //this fread will read raw binary mode
    file
    for(i = 0; i < 5; ++i)
    {
    printf("Name: %s\nHeight: %d ", stud2[i].name, stud2[i].height);
    }
    */
    printf("\n\n\t File Contailns: \n\n");
    while (!feof(fptr))
    {
//fread(stud2, sizeof(stud2), 1, fptr);
        fscanf(fptr, " %s %d", stud2->name, &stud2->height);
        printf("\tName: %s -> Height: %d \n", stud2->name, stud2->height);
    }
    fclose(fptr);
}
