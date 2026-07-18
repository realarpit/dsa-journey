#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,1,2,3,3,4,4,};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int hash[maxi+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[i]==1){
            cout<<i;
            break;
        }
    }
}
