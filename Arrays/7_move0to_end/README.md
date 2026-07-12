Brute: 
TC

Optimal TC


#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int count=0;
    int arr[n] = {0,4,0,3,5};
    for(int i=0;i<n;i++){
        if(arr[i]==0){
        count++;
        }
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            cout<<arr[i]<<" ";
        }
    }
    
    for(int i=0;i<count;i++){
        cout<<0<<" ";
    }
    
}
