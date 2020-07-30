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

// KADANES ALGORITHM

// TIME COMPLEXITY O(N)
// SPACE COMPLEXITY O(N)
int helper(vector<int>&a,int n){
    int res=a[0];
    vector<int> dp(n,-100000001);
    dp[0]=a[0];
    for(int i=1;i<n;i++){
        dp[i]=max(dp[i-1]+a[i],a[i]);
        res=max(res,dp[i]);
    }
    return res;
}

// TIME COMPLEXITY O(N)
// SPACE COMPLEXITY O(1)
int helper2(vector<int>&a,int n){
    int res=a[0];
    int cur_res=a[0];
    for(int i=1;i<n;i++){
        cur_res=max(cur_res,cur_res+a[i]);
        res=max(res,cur_res);
    }
    return res;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<helper(a,n)<<endl;
    }

}
