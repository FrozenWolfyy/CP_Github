#include<bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <stack>
#include <queue>
#include <unordered_map>
#include <time.h>

// #define int long long int
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define line cout << "\n" ;
using namespace std ;


// TIME COMPLEXITY O(N^2)
// SPACE COMPLEXITY O(1)


void helper(vector<int> &a,int n,int k){
    if(n==0){
        cout<<-1<<endl;
        return;
    }
    int s=0;
    for(int i=0;i<n;i++){
        s=0;
        for(int j=i;j<n;j++){
            s+=a[j];
            if(s==k){
                cout<<i+1<<" "<<j+1<<endl;
                return;
            }
            if(s>k){
                break;
            }
        }
    }
    cout<<-1<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> a(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        helper(a,n,k);
    }
}
