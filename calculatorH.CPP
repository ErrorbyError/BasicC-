#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    double a;
    double b;
    double c;
    double d;

    std::cout << "Enter side: " << std::endl;
    std::cin >> a;

    std::cout << "Enter size: " << std::endl;
    std::cin >> b;

    d = sqrt(pow(a, 2) + pow(b, 2));
     
    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << "side C: " << c << std::endl;
    std::cout << "another way to output side C: " << d << std::endl;


    

    return 0;
}
