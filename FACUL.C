#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int number = 5;
    int count = 0;

    printf("Enter your Number: \n");
    scanf("%d", &number);


    while (number > 0 )
    {
        number = number - 2;
        if (number < 0)
        {
            break;
        }
        count++;
    }
    
    printf("here it is: %d", count);

    return 0;
}
