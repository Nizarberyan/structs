#include <stdio.h>

typedef struct
{
    char name[25];
    char last_name[25];
    double grades[100];
} student;

int main()
{
    student student1;

    printf("Enter your name: ");
    fgets(student1.name, sizeof(student1.name), stdin);

    printf("Enter your last name: ");
    fgets(student1.last_name, sizeof(student1.last_name), stdin);

    printf("Enter your grades (use 0 to terminate): ");
    int i = 0;
    while (i < 100)
    {
        scanf("%lf", &student1.grades[i]);
        if (student1.grades[i] == 0)
        {
            break;
        }
        i++;
    }

    printf("Name: %s", student1.name);
    printf("Last name: %s", student1.last_name);
    printf("Grades: ");
    for (int j = 0; j < i; j++)
    {
        printf("%.2lf ", student1.grades[j]);
    }
    return 0;
}
