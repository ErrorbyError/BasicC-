#include <iostream>

int main(int argc, const char** argv) {
    // type conversion is used for convert a type for another. 
    // implicit = automatic
    // explicit = procede value with new data type. 

    char x = 100; // this one is implicit cuz it automatic convert the 100 for a single character referring it to ASCII TABLE. let's show it. 

    std::cout << x << std::endl;

    // the output is "d" cuz 100 in ASCII TABLE is d.

    //another example:

    int correct = 8;
    int questions = 10; 
    double score = correct / questions * 100;


    std::cout << score << std::endl;
    // we see that the output is 0  cuz we are divided using int dataType, and since percentage is give to us by decimals, we receive 0. but let's change that so we will get the percentage.    

    std::cout << score << '%' << std::endl;

    double scorePercentage = correct / (double)questions * 100; 
    // we convert the type of questions variable so that it become a double type, and now we can see the result is a doble type value. we could change the type of correct or questions, it doesn't matter. 


    std::cout << scorePercentage << '%' << std::endl;

    
    
    return 0;
}