#include <iostream>

int main(int argc, const char** argv) {
    
    std::string name;
    int age;
    std::string fullName;
    int wifeAge; 
    std::string wifeFullName;

    std::cout << "What's your name? " << std::endl;
    std::getline(std::cin, name);
    
    // for outPuts we use the ">>" (extraction operator) as we can see above. just for curiosity: "<<" is called insertion Operator.
    // we use cin for characters inputs


    std::cout << "Hello " << name << std::endl;
    std::cout << "and what about your age, could you tell us? " << std::endl; 

    std::cin >> age;
    std::cin.ignore();  // thanks to the chatGPT  I was able to fiz a issue related to this line. I wasn't getting the output of my fullname. 
    std::cout << "ooww sr." << name << " you are " << age << " years old!, so young" << std::endl;
    std::cout << "ow sorry, but what about your full name?, sr." << name << std::endl;
    
    
    std::getline(std::cin, fullName);
    std::cout << "you're welcome " << fullName << std::endl;
    //the tutorial provide us one more way to fix the problem when we use getline after std::cin.
    // another way to fix is this:

    std::cout << " now... could tell your wife's age?" << std::endl;
    std::cin >> wifeAge;
    
    std::cout << "what about your wife full name?" << std::endl;
    std::getline(std::cin >> std::ws,  wifeFullName); // this is another way to fix the issue: by adding ">> std::ws" it eliminate any new line character or any white spaces. let's try it out now. 

    std::cout << "ow hi.. " << wifeFullName << " I see you are a bit shy but don't worry..."  << std::endl; 
    




  
    
    

    // but there's one problem.  if we type our full name, this code will get only the first name. let's figure out hot to fix it. 


    return 0;
}