#include <iostream>
#include<unordered_map>
using namespace std;
int main() {
    int arr[] = {1,2,3,2,3,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int>mpp;
    
    for(int i=0;i<n;i++){
        mpp[v[i]]++;
    }
    for(auto it: mpp){
        if(it.second>(v.size)/2){
            return it.first;
        }
    }
    return -1;
}
