#include <iostream>

class Stove{
    private: //when something is private you can't universally access it
        int temp = 0;

    public:
        int getTemp(){ // getter's get a private var to a read only public var (just a naming convention to name it get)
            return temp;
        }
        void setTemp(int temp){ // setter's set/change the var's value using a function in the public space
            if(temp <= 0){
                this-> temp = 0;
            }else if(temp >= 100){
                this-> temp = 100;
            }else{
                this-> temp = temp;
            }
        }

};

int main(){

    Stove stove;

    stove.setTemp(100000);

    std::cout << stove.getTemp() << '\n';



    return 0;
}