#include <iostream>
#include <map>
using namespace std;
int main() {
    int arr[]={1,3,4,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 10;
    bool found = false;
    map<int,int>mpp;
    
    for (int i = 0; i < n; i++) {
    int a = arr[i];
    int more = target - a;
    
    if(mpp.find(more) != mpp.end()){
        found = true;
        break;
    }
    mpp[a] = i;
    }
    if(!found){
        cout<<"no";
  }
  else{
      cout<<"yes";
  }
}
