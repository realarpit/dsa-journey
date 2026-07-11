#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int arr[n] = {1,4,6,3,5};
    int last = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
        cout<<arr[i]<<" ";
    }
    arr[n-1]=last;
    cout<<arr[n-1];
    
}
