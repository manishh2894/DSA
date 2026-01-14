#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[] = {1, 2, 4, 7, 7, 5};
    int n = 6;

    int largest = a[0];
    int slargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            slargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > slargest) {
            slargest = a[i];
        }
    }

    cout << slargest<<endl;;
    return 0;
}
