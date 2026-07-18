#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int sum=0;
    int s2=0;
    for(int i=1;i<=n+1;i++){
        sum = sum + i;
    }
    for(int i=0;i<n;i++){
        s2 = s2 + arr[i];
    }
    int ans = sum-s2;
    cout<<ans;
}
