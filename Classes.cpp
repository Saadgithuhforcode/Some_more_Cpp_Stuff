#include <iostream>

// classes are like structs but it can have functions.
// it can be used to do OOP.
// classes are also private by default unlike structs which are public by default.

class human{
    public:
        int age;
        std::string name;
        std::string job;

        void eat(){
            std::cout << "The person is eating.\n"; 
        }
        void drink(){
            std::cout << "The person is drinking.\n";
        }
        void shower(){
            std::cout << "The person is showering stinky.\n";
        }
};

int main(){

    human human1;

    human1.age = 25;
    human1.job = "unemployed";
    human1.name = "Joe";

    std::cout << "The persons name is: " << human1.name << '\n';
    std::cout << "The persons age is: " << human1.age << '\n';
    std::cout << "The persons occupation is: " << human1.job << '\n';

    human1.eat(); 

    return 0;
}