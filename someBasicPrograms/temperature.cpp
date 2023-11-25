#include <iostream>   
#include <string>


int main(int argc, char const *argv[])
{

    std::cout << "***************Temperature****************" << std::endl;
    std::cout << "c - Celsius" << std::endl;
    std::cout << "F - Fahrenheit" << std::endl;
    std::string temp;
    double result;
    double temperature; 
    double grau;
    std::cout << "which temperature would like to convert to?" << std::endl;
    std::cin >> temp;

    if(temp == "f" || temp == "F"){
        std::cout << "Enter the temperature in Celsius" << std::endl;
        std::cin >> grau;
        result = (1.8 * grau) + 32;

         std::cout << "the temperature in Fahrenheit is: " << result << "F" << std::endl;
    }else if (temp == "C" || temp == "c")
    {
         std::cout << "Enter the temperature in Fahrenheit" << std::endl;
        std::cin >> grau;
        result = (grau - 32) / 1.8;
         std::cout << "the temperature in Celsius is: " << result << "C" << result << std::endl;
    }
        std::cout << "***************Temperature****************" << std::endl;

    










    return 0;
}
