#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int xor1=0;
    int xor2=0;
    for(int i=1;i<=n+1;i++){
        xor1 = xor1^i;
    }
    for(int i=0;i<n;i++){
        xor2 = xor2^arr[i];
    }
    int ans=xor1^xor2;
    cout<<ans;
}
