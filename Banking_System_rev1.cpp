#include <iostream>
#include <iomanip>


void showBalance(double balance);

double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;

    int choice;

    do{
        std::cout << "*******************\n";
        std::cout << "Welcome to the Bank\n";
        std::cout << "*******************\n";
        std::cout << "Please Choose one or the others\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thanks for coming!";
                break;
        }
    }while(choice != 4);

    return 0;
}


void showBalance(double balance){
    std::cout << std::setprecision(2) << std::fixed << balance << " is your balance.\n";
}

double deposit(){
    double amount;

    std::cout << "Please enter the amount of money to be deposited: " << std::endl;
    std::cin >> amount;

    if(amount < 0){
        std::cout << "Invalid amount\n";
        return 0;
    }else{
        return amount;
    }
}

double withdraw(double balance){
    double amount;

    std::cout << "Please enter the amount of money to be withdrawn: " << std::endl;
    std::cin >> amount;

    if(amount < 0){
        std::cout << "Invalid amount\n";
        return 0;
    }else if(amount > balance){
        std::cout << "Go get a job brokey!\n";
        return 0;
    }else{
        return amount;
    }
    
}

