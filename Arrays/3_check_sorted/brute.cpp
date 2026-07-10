#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int arr[n] = {1, 6, 8, 8, 8};
    bool sorted = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted){
        cout << "sorted";
    }
    else cout << "not sorted";
}
