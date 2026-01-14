#include <iostream>
#include <climits>   
using namespace std;

int main() {
    int nums[] = {5, 15, 32, -65, 7, 3, 5, 0, -31};
    int size = 9;
    
    int smallest = INT_MAX;
    
    for(int i = 0; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }
    
    cout << "Smallest number is " << smallest << endl;
    
    return 0;