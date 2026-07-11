#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int d = 2;
    int arr[n] = {1,4,6,3,5};
    int temp[2];
    for (int i = 0; i < 2; i++) {
        temp[i] = arr[i];
    }

    for(int i=0;i<n-d;i++){
        arr[i]=arr[i+d];
        cout<<arr[i]<<" ";
    }
    
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
        cout<<arr[i]<<" ";
    }
    
}
