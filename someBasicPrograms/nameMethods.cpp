#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string name;

    std::cout << "Type your name: " << std::endl;
    std::getline(std::cin, name);



    if (name.length() >= 12)
    {
        std::cout << "your name is too long, it's not allow to enter a name 12 character longer" << std::endl;
        name.clear();
        name.append("....");
        std::cout << name << std::endl;

    }else if (name.empty())
    {
        std::cout << "please, type your name: " << std::endl;
        std::getline(std::cin, name);
        std::cout << "your welcome, sr." << name << std::endl;
        name.append("@1062");

    }else
    {
        std::cout << "your welcome, sr." << name << std::endl;
        name.append("@1062");
        std::cout << "here is your ID" << name << std::endl;
    }


    



    return 0;
}
