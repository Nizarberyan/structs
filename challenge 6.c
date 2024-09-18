#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[25];
    float price;
    int quantity;
} product;

product products[100];

int n;
int main()
{
    printf("Enter the number of products: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of product %d: ", i + 1);
        fgets(products[i].name, sizeof(products[i].name), stdin);
        products[i].name[strcspn(products[i].name, "\n")] = '\0';
        printf("Enter the price of product %d: ", i + 1);
        scanf("%f", &products[i].price);
        getchar();
        printf("Enter the quantity of product %d: ", i + 1);
        scanf("%d", &products[i].quantity);
        getchar();
    }
    for (int i = 0; i < n; i++)
    {
        printf("Product %d: %s, Price: %.2f, Quantity: %d\n", i + 1, products[i].name, products[i].price, products[i].quantity);
    }
    return 0;
}