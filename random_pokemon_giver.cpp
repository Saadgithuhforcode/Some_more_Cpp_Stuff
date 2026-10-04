#include <iostream>
#include <ctime>

int main(){

    srand(time(0));

    int randnum = rand() % 5 + 1;

    switch(randnum){

        case 1:
        std::cout << "You get a Charizard ex!\n";
        break;

        case 2:
        std::cout << "You get Charizard!\n";
        break;

        case 3:
        std::cout << "You get a Pichuu!\n";
        break;

        case 4:
        std::cout << "You get a Gengar!\n";
        break;

        case 5:
        std::cout << "You get a Mewtwo!\n";
        break;
    }
    return 0;
}