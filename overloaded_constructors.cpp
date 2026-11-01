#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;
        double size;

        Pizza(std::string topping1, double size){ // normal consstructor        
            this-> topping1 = topping1;
            this-> size = size;
        }

        Pizza(std::string topping1, std::string topping2, double size){ // overloaded consstructor        
            this-> topping1 = topping1;
            this-> topping2 = topping2;
            this-> size = size;
        }
};


int main(){

    Pizza peparroniPizza("cheese", "Peparroni", 11.6);

    Pizza cheesePizza("cheese", 6.0);

    std::cout << peparroniPizza.topping1 << '\n';
    std::cout << peparroniPizza.topping2 << '\n';
    std::cout << peparroniPizza.size << '\n';

    std::cout << cheesePizza.topping1 << '\n';
    std::cout << cheesePizza.size << '\n';

    return 0;
}