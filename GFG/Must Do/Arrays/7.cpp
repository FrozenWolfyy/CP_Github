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
#include <map>

// #define int long long int
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define line cout << "\n" ;
using namespace std ;


// NUMBER OF PAIRS

// TIME COMPLEXITY O()
// SPACE COMPLEXITY O()
int helper(vector<int>&a,vector<int>&b,int m,int n){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<int>a(n,0);
        vector<int>b(m,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        cout<<helper(a,b,n,m)<<endl;
    }

}
