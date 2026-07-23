#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {1,2,5,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target=14;
    bool found = false;
    
    int left=0, right=n-1;
    sort(arr, arr + n);
    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum==target){
            found = true;
            break;
        }
        else if(sum<target){
            left++;
        }
        else right--;
    }
    if (!found) {
        cout << "No";
    }
}
