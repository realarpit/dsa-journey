#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,1,1,1,1,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    int maxlen=0;
    int start=-1;
    int end=-1;
   
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum = sum+arr[j];
            if(sum==k) {
                int len = j-i+1;
                if(len > maxlen){
                    maxlen = len;
                    start=i;
                    end=j;
                }
            }
        }
    }
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
}
