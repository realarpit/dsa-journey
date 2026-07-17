#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a[5] = {1,2,2,3,3};
    int b[3] = {2,3,3};
    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    for(auto it: ans){
        cout<<it<<" ";
    }
}
