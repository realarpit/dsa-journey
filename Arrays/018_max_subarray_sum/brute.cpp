#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxi=INT_MIN;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum=0;
            for(int k=i;k<j;k++){
                sum = sum + arr[k];
                maxi=max(sum, maxi);
            }
        }
    }
    cout<<maxi;
}
