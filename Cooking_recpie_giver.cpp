#include <iostream>

struct recipies{

    std::string ingredient_1;
    std::string ingredient_2;
    std::string ingredient_3;
    std::string ingredient_4;
    std::string ingredient_5;

    int makeTime;
    // makeTime in minutes
    bool difficulty;
    // difficulty ; 1 == easy, 0 == hard
    int addOrder[5];
};


int main(){

    recipies grilled_cheese;
    grilled_cheese.ingredient_1 = "2 slices of bread";
    grilled_cheese.ingredient_2 = "mayo";
    grilled_cheese.ingredient_3 = "mozzarella";
    grilled_cheese.ingredient_4 = "ham";
    grilled_cheese.ingredient_5 = "oil";
    
    grilled_cheese.makeTime = 15;
    grilled_cheese.difficulty = 1;

    grilled_cheese.addOrder[0] = 5;
    grilled_cheese.addOrder[1] = 1;
    grilled_cheese.addOrder[2] = 2;
    grilled_cheese.addOrder[3] = 3;
    grilled_cheese.addOrder[4] = 4;

    std::cout << grilled_cheese.ingredient_1 << '\n';
    std::cout << grilled_cheese.ingredient_2 << '\n';
    std::cout << grilled_cheese.ingredient_3 << '\n';
    std::cout << grilled_cheese.ingredient_4 << '\n';
    std::cout << grilled_cheese.ingredient_5 << '\n';
    std::cout << "                                      " << '\n';

    std::cout << "The the time to make the recipe is: " << grilled_cheese.makeTime << " minutes." <<'\n';

    if(grilled_cheese.difficulty == 1){
        std::cout << "The recipe is easy to make." << '\n';
    }else{
        std::cout << "The recipe is hard to make." << '\n';
    }
    
    std::cout << "Now add ingredient no." << grilled_cheese.addOrder[0] << '\n';

    for(int i = 1; i < 5; i++ ){
        std::cout << "After that add ingredient no." << grilled_cheese.addOrder[i] << '\n';
    }

    return 0;
}