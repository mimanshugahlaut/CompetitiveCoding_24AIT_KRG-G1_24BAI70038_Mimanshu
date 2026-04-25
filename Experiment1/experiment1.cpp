#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int moves=min(m,n);
    if(moves%2==1) cout<<"Akshat";
    else cout<<"Malvika";
    return 0;
}
