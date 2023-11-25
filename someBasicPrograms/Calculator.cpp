#include <iostream>
#include <string>


int main()
{
    char sigh = '-';
    double number_one = 1;
    double number_two = 2;
    int next = 2;
    std::string decide = "yes";
    std::cin
    
    std::cout << "*********************CALCULATOR************************" << std::endl;


    while (next == 2)
    {

        std::cout << "Enter sigh (*, /, +, -): "<< '\n';

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
        std::cin >> decide; 


        if (decide == "yes") 
        {       
            next = 2;
        } else{
            next = 1;
        }

        

    }
    
    std::cout << "calculator ended..." << std::endl;

    std::cout << "*********************CALCULATOR************************" << std::endl;


    return 0;
}