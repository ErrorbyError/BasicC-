#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

#include <cmath>


int main(int argc, char const *argv[])
{
    //pseudo-random = not truly random but close. 
    bool stop = false;

    while (stop)
    {
    srand(time(NULL)); 
    //it'll give random number from 1 to 3231
    //if we need to limite the range of number. we can use the example above. using "%" and the number. the method will only give number from 0 to that number - 1. so if we want to consider the actual number, we need to add + 1. 
    int num = (rand() % 20) + 1; 
    std::cout << num << std::endl;
    
    if (num == 7)
    {
        stop = false;
    }
    
    }

    srand(time(0));

    int randNum = (rand() % 6) + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "you win a gift pack!" << std::endl;
        break;
    case 2:
         std::cout << "you win a potato!" << std::endl;
         break;
    case 3:
         std::cout << "you win a pack full of clothes!" << std::endl;
         break;
    case 4:
        std::cout << "you win a cigarette!" << std::endl;
        break;
    case 5:
        std::cout << "you win nothing... you unlucky day!" << std::endl;
        break;
    case 6:
        std::cout << "you win me!" << std::endl;
        break;
    default:

        break;
    }

    







    return 0;
}
