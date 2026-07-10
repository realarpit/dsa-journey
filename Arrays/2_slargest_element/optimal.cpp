#include <iostream>
using namespace std;
int main() {
    int n =5;
    int arr[n] = {1,6,8,8,3};
    int largest=1;
    int slargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    } cout<<slargest;
}
