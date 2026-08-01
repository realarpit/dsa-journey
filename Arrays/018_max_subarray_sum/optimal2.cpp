#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int ansStart=-1;
    int ansEnd=-1;
    int start = 0;
    
    int maxi = INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum==0) start=i;
        sum = sum + arr[i];
        if(sum>maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum<0){
            sum=0;
        }
    }
    for(int i = ansStart; i <= ansEnd; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
