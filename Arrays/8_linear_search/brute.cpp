#include <iostream>
using namespace std;
int main() {
    int n =5;
    int arr[n] = {1,3,5,6,7};
    int num=5;
    
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            cout<<i;
        }
    }
    return -1;
}
