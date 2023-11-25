#include <stdio.h>



int main(int argc, char const *argv[])
{
    float num;
    printf("digite um numero: \n");
    scanf("%d", &num);
    printf("\n O antecessor é: %.0f", num-1.0);
    printf("\n O sucessor é: %.0f", num+1.0);

    return 0;
}
