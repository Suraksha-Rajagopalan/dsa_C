// Write C Program to store information (Roll Number, Name, Marks for 4 subjects,
// Grade) of 5 Students Using Structure.

#include <stdio.h>
struct student
{
    char name[50];
    int roll_number;
    float marks[4];
};
int main()
{
    struct student s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("\nEnter roll no: ");
        scanf("%d", &s[i].roll_number);
        for (int j = 0; j < 4; j++)
        {
            printf("\nEnter the marks in subject %d (out of 100): ", j + 1);
            scanf("%f", &s[i].marks[j]);
        }
        printf("\n");
    }
    printf("Name\tRoll no\t\tMarks\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\t\t%d\t\t\t",
               s[i].name, s[i].roll_number);
        for (int j = 0; j < 4; j++)
            printf("%.2f\t", s[i].marks[j]);
        printf("\n");
    }
    return 0;
}
