#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a[4] = {1, 2, 4, 5};
    int n = 5;
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(a[j]==i){
                flag=1;
                break;
            }    
        }
    
      if(flag==0){
          cout<<i;
          break;
      }
  }
}
