#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxx = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxx){
            maxx=arr[i];
            cout<<"The leaders are: "<<maxx<<"\n";
        }
    }
}
