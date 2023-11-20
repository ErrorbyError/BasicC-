#include <iostream>

#include <cmath> // we use this to be able to use some math functions


int main(int argc, char const *argv[])
{
    // some of the basics maths functions we have in c++.

    double x = 3;
    double y = 4; 
    double z ;
    double a;
    double b;
    double c;
    double d;
    double e;
    double f;
    double g;
   

    std::cout << "max: " << std::endl;
    z = std::max(x, y);
    std::cout << z << std::endl;

    std::cout << "min: " << std::endl;
    a = std::min(x,y);
    std::cout << a << std::endl;

    std::cout << "power" << std::endl;
    b = pow(2, 4); // this is the power function. it wll multiple the number 2 four times. 
    std::cout << b << std::endl;

    std::cout << "square root > raiz quadrada" << std::endl;
    c = std::sqrt(9); // this is the square root or raiz quadrada. it will get square root of 9 that's 3.
    std::cout << c << std::endl;

    std::cout << "ABS: " << std::endl;
    d = std::abs(-6); // this will convert any negative number to positive number. 
    std::cout << d << std::endl;

    std::cout << "round with 50'%' down the integer" << std::endl;
    e = std::round(3.4); // this will round to a integer number. 
    std::cout << e << std::endl;
    std::cout << "round with 50'%' up the integer" << std::endl;
    // obs: if the decimal for greater than 50% of the integer. the function will round up. if the decimal is bellow the 50%, it'll round down. 
    e = std::round(3.6); // this one will show 4. 
    std::cout << e << std::endl;

    std::cout << "ceil:" << std::endl;
    g = std::ceil(3.1); // this one will round up no matter if de decimal is below the 50% of the integer or up. 
    std::cout << g << std::endl;

    std::cout << "floor:" << std::endl;
    g = std::floor(3.9); // this one will round down no matter if the decimal is below of the integer or up. 
    std::cout << g << std::endl;


    // for more information, visit: https://cplusplus.com/reference/cmath/


















    return 0;
}

