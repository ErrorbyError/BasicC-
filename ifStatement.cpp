#include <iostream>

int main(int argc, char const *argv[])
{
    //Let's learn if statement using c++.
    std::string name; 
    std::cout << "hello, What's your name? " << std::endl;
    std::cin >> name;
 
    if (name == "Talisson")
    {
        std::cout << "Hi, Talisson, it's a pleasure to see you again in this site." << std::endl;
     
    } else if (name == "Pedro")
    {
        std::cout << "hi, pedro, it's your first time here, I presumed." << std::endl;
    }else
    {
        std::cout << "I presumed this name you gave to me is not a actual name, Are you faking your identity? " << std::endl;

    }

    std::cout << "....." << std::endl;




    


    
    return 0;
}
