#include <iostream>

int main(int argc, char const *argv[])
{
    char sigh;
    double number_one;
    double number_two;
   




    std::cout << "*********************CALCULATOR************************" << std::endl;

    
        
        std::cout << "Enter sigh (*, /, +, -): " << std::endl;
        std::cin >> sigh;

        std::cout << "Enter your first Number: " << std::endl;
        std::cin >> number_one;

        std::cout << "Enter your second number: " << std::endl;
        std::cin >> number_two;


        switch (sigh) // it seems we can not use "" in cases. only the '' instead.
        {
        case '*':

            std::cout << "This is the result: " << number_one * number_two << std::endl;
            break;
        case '/':
            std::cout << "This is the result: " << number_one / number_two << std::endl;
            break;
        case '+':
            std::cout << "This is the result: " << number_one + number_two << std::endl;
            break;
        case '-':
            std::cout << "This is the result: " << number_one - number_two << std::endl;
            break;

        default:
            std::cout << "something is wrong!" << std::endl;
            break;
        }
        
    std::cout << "do you want to do more calculations?" << std::endl;
    
    std::cout << "calculator ended..." << std::endl;

    std::cout << "*********************CALCULATOR************************" << std::endl;


    return 0;
}
