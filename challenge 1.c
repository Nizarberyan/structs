#include <stdio.h>

struct person
{
    char name[10];
    char last_name[10];
    int age;
};

int main()
{
    struct person person;
    printf("\tEnter your name: ");
    scanf("\t%s", person.name);

    printf("\n\tEnter your last name: ");
    scanf("%s", person.last_name);

    printf("\n\tEnter your age: ");
    scanf("%d", &person.age);

    printf("\n\tName: %s\n\tLast Name: %s\n\tAge: %d\n", person.name, person.last_name, person.age);
    return 0;
}