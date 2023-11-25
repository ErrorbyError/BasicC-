#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int valores = 0; 
    int user = 0;
    printf("**********SOMA************\n");
    


    while (valores <= 100)
    {
        printf("Enter with a number, I'll calcule to your but I'm limited to 100.\n");
        scanf("%d", &user);

        valores += user;


        printf("our current sum: %d\n", valores);
       
        
    }
    
    printf("our calculations suppressed 100, bye\n ");
    printf("here it is: %d\n", valores);



    return 0;
}
