#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[]={1,1,2,3,1,1,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=0;
    int k=6;
    int maxlen=0;
    int sum=0;
    while(right<n){
        sum += arr[right];
        while(left<=right && sum>k){
            sum -=arr[left];
            left++;
        }
        if(sum==k) maxlen=max(maxlen,right-left+1);
        
         right++;
    }
    cout<<maxlen;
}
