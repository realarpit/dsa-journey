#include <iostream>
using namespace std;
int main() {
    int arr[]={2,5,6,8,11};
    int target=14;
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])==target){
                flag=1;
                cout<<i<<" "<<j;
                cout<<endl;
                break;
            }
        }
    }
    if(flag==1){
        cout<<"yes";
        
    }
    else{
        cout<<"no";
    }
}
