#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{

    struct student s1;
    strcpy(s1.name, "Sameer Kumar");
    s1.roll = 125113046;
    s1.marks = 100;

    printf("student's details-\n");
    printf("name: %s\n", s1.name);
    printf("roll no.: %d\n", s1.roll);
    printf("marks: %d\n", s1.marks);

    printf("\nSameer Kumar ,125113025");

    return 0;
}