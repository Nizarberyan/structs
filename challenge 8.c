#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    double radius;
} circle;

double area(circle *c)
{
    return 3.14 * c->radius * c->radius;
}

int main()
{
    circle *c = malloc(sizeof(circle));
    if (c == NULL)
    {
        return 1;
    }
    printf("Enter radius: ");
    scanf("%lf", &c->radius);
    printf("Area: %.2lf", area(c));
    return 0;
}