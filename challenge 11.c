#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
    char name[50];
    int grade;
    struct Student *next;
} Student;

Student *createStudent(const char *name, int grade);
void addStudent(Student **head, const char *name, int grade);
void displayList(const Student *head);
void freeList(Student *head);

int main()
{
    Student *head = NULL;

    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar();

    for (int i = 0; i < numStudents; i++)
    {
        char name[50];
        int grade;

        printf("Enter the name of student %d: ", i + 1);
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';

        printf("Enter the grade of student %d: ", i + 1);
        scanf("%d", &grade);
        getchar();

        addStudent(&head, name, grade);
    }

    printf("\nStudent List:\n");
    displayList(head);

    freeList(head);

    return 0;
}

Student *createStudent(const char *name, int grade)
{
    Student *newStudent = (Student *)malloc(sizeof(Student));
    if (newStudent == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    strncpy(newStudent->name, name, sizeof(newStudent->name) - 1);
    newStudent->name[sizeof(newStudent->name) - 1] = '\0';
    newStudent->grade = grade;
    newStudent->next = NULL;
    return newStudent;
}

void addStudent(Student **head, const char *name, int grade)
{
    Student *newStudent = createStudent(name, grade);
    newStudent->next = *head;
    *head = newStudent;
}

void displayList(const Student *head)
{
    if (head == NULL)
    {
        printf("The list is empty.\n");
        return;
    }
    const Student *current = head;
    while (current != NULL)
    {
        printf("Name: %s, Grade: %d\n", current->name, current->grade);
        current = current->next;
    }
}

void freeList(Student *head)
{
    Student *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
