#include <iostream>
#include <vector>
int main(int argc, const char** argv) {
    
    int x; // declaration
    int y; 
    x = 5;  // assignment 
    y = 6;
// types
    // int
    int age = 21; // int means integer which is a whole number. 
    // what would happen if I use a double value into a int declaration? 
    int my_age = 21.9;

    std::cout << my_age << '\n';
    // When we talk about INT values, the value before the colon is ignored 
    std::cout << x << '\n'; 
    //double
    // double (numbers that include decimal)
    double MyWallet = 330.40;
    std::cout << MyWallet << '\n';
    //char (single character)
    

    //boolean (true or false)

    bool student = true;
    bool power = false;

    //String(objects that represents a sequence of text)

    std::string name = "Talisson";
    std::string today = "today is Saturday";

    std::cout << "you are " << name << " " << age << " years old" << '\n';



    //typedef is used for a nickname for long data types. for example: std::vector::std::pair<std::string, int. 
    // this is a long data type. to make it more readable, let's use typedef.

   
    
    // typedef std::string text_t;
    // text_t secondName = "Talisson Pedro";

    //std::cout << secondName << '\n';


    //typedef is incredible, but... i RECOMMEND to use the "using" keyword for these functionally. the reason for that is because it's more suitable for templates. 


    using text_t = std::string;

    text_t secondName = "My second name is Pedro";
    std::cout << secondName;
    











   




    
    return 0;
}