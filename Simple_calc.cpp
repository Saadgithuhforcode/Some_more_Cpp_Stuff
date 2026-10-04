#include <iostream>

int main() {
    
    char op;
    double num1 , num2, res;

    std::cout << "Enter an operator (+ - * /): " << std::endl;
    std::cin >> op;
    if(op != '+' && op != '-' && op != '*' && op != '/'){
        std::cout << "Invalid operator. Please enter a valid operator." << std::endl;
        return 1;
    }

    std::cout << "You will have to enter 2 numbers. " << std::endl;

    std::cout << "Enter first number: " << std::endl;
    std::cin >> num1;

    std::cout << "Enter second number: " << std::endl;
    std::cin >> num2;

    switch(op){
        case '+':
            res = num1 + num2;
            break;
         case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            if(num2 != 0){
                res = num1 / num2;
            }else{
                std::cout << "Don't enter 0 as the second number for division." << std::endl;
                return 1;
            }
    }

    std::cout << "The answer is: " << res << std::endl;
    return 0;
}