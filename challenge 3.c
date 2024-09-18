#include <stdio.h>

typedef struct
{
    float width, height;
} rectangle;

void area(rectangle r)
{
    printf("\n\tArea: %.2f", r.width * r.height);
}
int main()
{
    rectangle r;
    printf("\n\tEnter width: ");
    scanf("%f", &r.width);
    printf("\n\tEnter height: ");
    scanf("%f", &r.height);
    area(r);
    return 0;
}