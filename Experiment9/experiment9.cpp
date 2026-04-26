#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>edges(n-1);
    vector<int>degree(n+1,0);
    for(int i=0;i<n-1;i++){
        cin>>edges[i].first>>edges[i].second;
        degree[edges[i].first]++;
        degree[edges[i].second]++;
    }
    int leaf=-1;
    for(int i=1;i<=n;i++){
        if(degree[i]>=3){
            leaf=i;
            break;
        }
    }
    vector<int> ans(n-1,-1);
    int label=0;
    if(leaf!=-1){
        for(int i=0;i<n-1;i++){
            if(edges[i].first==leaf||edges[i].second==leaf){
                ans[i]=label++;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        if(ans[i]==-1){
            ans[i]=label++;
        }
    }
    for(int x:ans){
        cout<<x<<"\n";
    }
    return 0;
}
