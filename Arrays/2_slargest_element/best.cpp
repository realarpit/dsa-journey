#include <iostream>
using namespace std;
int main() {
    int n=5;
    int arr[n] = {1,4,6,8,8};
    int largest = arr[0];
    for(int i=0;i<n;i++){
        
        if(arr[i]>largest){
            largest = arr[i];
        }
    } cout<<largest<<endl;;
    
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>slargest && arr[i]<largest){
            slargest = arr[i];
        }
    } cout<<slargest;
    
}
