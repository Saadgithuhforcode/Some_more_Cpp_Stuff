#include <iostream>
#include <print>

int search(int array[], int size, int element);

int main(){ 
    int userNum;
    int pos;
    int size;
    
    int nums[] = {1,2,3,4,5,6,7,8,9,10};

    size = sizeof(nums)/sizeof(nums[0]);

    std::println("What number would you like to find? ");
    std::cin >> userNum ;

    pos = search(nums, size, userNum);

    if(pos != -1){std::cout << "The number is at index " << pos << std::endl;}else{std::cout << "The number you were looking for was not found\n";}

    return 0;
}

int search(int array[], int size, int element){
    for(int i = 0 ; i < size ; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}