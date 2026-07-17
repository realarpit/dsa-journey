#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a[5] = {1,2,2,3,3};
    int b[3] = {2,3,3};
    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);
    int vis[n2]={0};
    vector<int>temp;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i]==b[j] && vis[j]==0){
                temp.push_back(a[i]);
                vis[j]=1;
                break;
            }
            if(b[j]>a[i]) break;
        }
    } 
    for(auto it: temp){
        cout<<it<<" ";
    }
    
}
