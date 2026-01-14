#include <iostream>
using namespace std;

int main() {

    int a[] = {1,2,3,4,5};
    int n = sizeof(a) / sizeof(a[0]);

    for(int i = 1; i < n; i++){
        if(a[i] > a[i-1]){
            // nothing
        }
        else {
            cout << "This is not a sorted array" << endl;
            return 0;
        }
    }

    cout << "This is sorted array" << endl;
    return 0;
}
