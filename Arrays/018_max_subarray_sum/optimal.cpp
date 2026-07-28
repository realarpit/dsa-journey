#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum<0){
            sum=0;;
        }
        sum = sum + arr[i];
        maxi=max(sum, maxi);
    }
    cout<<maxi;
}
