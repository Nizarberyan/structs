#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int day;
    int month;
    int year;
} date;

int main()
{

    date *d = malloc(sizeof(date));
    if (d == NULL)
    {
        return 1;
    }
    printf("Enter the day: ");
    scanf("%d", &d->day);
    printf("Enter the month: ");
    scanf("%d", &d->month);
    printf("Enter the year: ");
    scanf("%d", &d->year);
    printf("Date: %d/%d/%d\n", d->day, d->month, d->year);
    return 0;
}
