#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name[25];
    double salary;
} employee;

int main()
{

    int n;

    printf("enter the number of employees: ");
    scanf("%d", &n);

    getchar();

    employee *employees = malloc(n * sizeof(employee));

    if (employees == NULL)
    {
        printf("failed to allocate memory\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {

        printf("enter the name of employee %d: ", i + 1);
        fgets(employees[i].name, sizeof(employees[i].name), stdin);

        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';

        printf("enter the salary of employee %d: ", i + 1);
        scanf("%lf", &employees[i].salary);

        getchar();
    }

    for (int i = 0; i < n; i++)
    {

        printf("employee %d: %s, salary: %.2lf\n", i + 1, employees[i].name, employees[i].salary);
    }
}