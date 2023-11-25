#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char const *argv[])
{
    struct Product
    {
        int cod;
        float price;
        char description[100];
    };
    struct Product product;


    product.cod = 1;
    product.price = 20.10;
    // since string is not a primitive type. we can't sign it right away.
    // use the strcpy structure. 
    strcpy(product.description, "Milk");

    printf("%d - %f - %s \n", product.cod, product.price, product.description);

    printf("Now let's create something more greater...");


    printf("******************************************************************************************* \n");
    int quantity = 0; 
    int count = 0;

    printf("how many products are you gonna register? \n");
    scanf("%d",  &quantity);
    
    struct Product produtos[quantity];

    for (int i = 0; i < quantity; i++)
    {
    produtos[i].cod = i + 1;
    printf("Register the description of your product number: %d \n", produtos[i].cod);
    scanf("%s", produtos[i].description);
    //gets(produtos[i].description);
    fflush(stdin);
    printf("registered!\n");
    
    // sprintf("Now, Register the price of your current product: %s, code: %d \n", produtos[i].description, produtos[i].cod);
    printf("Now, Register the price of your current product: %s, code: %d \n", produtos[i].description, produtos[i].cod);

    scanf("%f", &produtos[i].price);
    fflush(stdin);

    printf("registered! \n");

    printf("All product's details registered! \n");

    count ++;

    printf(">>>>>>>>>>Total product registered: %d <<<<<<<<<<<<<\n", count);
    }
    

    printf("this is all of  your registered products: \n");
    for (int i = 0; i < quantity; i++)
    {
        printf("%d - %s - %.2f$ \n", produtos[i].cod, produtos[i].description, produtos[i].price);
    }

    return 0;
}
