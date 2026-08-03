int main() {
    int n = arr.size();
    vector<int> ans(n,0); //arr of size n having value 0
    
    int posIndex=0, negIndex=1;
    
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[negIndex] = arr[i];  //if arr elements less than 0 then put them at negative indexes
            negIndex += 2;
        }
        else{
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }
}
