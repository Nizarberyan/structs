#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char title[20];
    char author[20];
    int year;
} book;

book *create_book(const char *title, const char *author, int year)
{
    if (title == NULL || author == NULL)
    {
        return NULL;
    }

    book *new_book = (book *)malloc(sizeof(book));
    if (new_book == NULL)
    {
        return NULL;
    }

    strncpy(new_book->title, title, sizeof(new_book->title));
    strncpy(new_book->author, author, sizeof(new_book->author));
    new_book->year = year;

    return new_book;
}
char title[20];
char author[20];
int year;
int main()
{
    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);
    printf("Enter book author: ");
    fgets(author, sizeof(author), stdin);
    printf("Enter book year: ");
    scanf("%d", &year);
    book *my_book = create_book(title, author, year);
    if (my_book == NULL)
    {
        fprintf(stderr, "Failed to create book\n");
        return 1;
    }

    printf("Title: %s\nAuthor: %s\nYear: %d\n", my_book->title, my_book->author, my_book->year);
    free(my_book);
    return 0;
}
