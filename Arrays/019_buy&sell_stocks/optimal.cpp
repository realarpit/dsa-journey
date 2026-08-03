#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[] = {7,1,3,5,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int minPrice = INT_MAX;
    int maxProfit = 0;
    
    for(int i=0;i<n;i++){
        minPrice = min(minPrice, arr[i]);
        maxProfit = max(maxProfit, arr[i] - minPrice);
    }
    cout<<maxProfit;
}
