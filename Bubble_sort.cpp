#include <iostream> 

void sort(int nums[], int size);

int main(){

    int nums[] = {1,3,2,5,4};
    int size = sizeof(nums)/sizeof(nums[0]);

    sort(nums, size);

    for(int k : nums){
        std::cout << k << " ";
    }
    return 0;
}

void sort(int nums[], int size){

    int temp;
    for(int i = 0 ; i < size - 1 ; i++){
        for(int j = 0 ; j < size - i - 1 ; j++){
            if(nums[j] > nums[j + 1]){
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}