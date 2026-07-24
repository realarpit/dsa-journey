#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,2,3,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int cnt=0;
    int el;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=arr[i];
        }
        else if(arr[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
}
