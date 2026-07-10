#include <iostream>
using namespace std;
int main() {
    int n=5;
    int arr[n] = {1,4,6,3,5};
    int largest = arr[0];
    for(int i=0;i<n;i++){
        
        if(arr[i]>largest){
            largest = arr[i];
        }
    } cout<<largest;
}
