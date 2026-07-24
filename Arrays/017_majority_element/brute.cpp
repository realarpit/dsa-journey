#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,2,3,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool found = false;
    
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
            cout<<arr[i];
            found =true;
            break;
        }
    }
    if(found){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
