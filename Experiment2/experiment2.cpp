#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int ones=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1) ones++;
    }

    int maxSum=-1e9,currSum=0;
    for(int i=0;i<n;i++){
        int val;
        if(arr[i]==0) val=1;
        else val= -1;

        currSum=max(val,currSum+val);
        maxSum=max(maxSum,currSum);
    }
    cout<<ones+maxSum;
    return 0;
}
