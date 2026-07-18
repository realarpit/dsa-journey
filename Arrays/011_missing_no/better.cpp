#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int hash[6]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]=1;
    }
    for(int i=1;i<=n+1;i++){
        if(hash[i]==0){
            cout<<i;
            break;
        }
    }
    
}
