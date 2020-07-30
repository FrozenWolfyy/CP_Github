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


// SORT AN ARRAY OF 1'S 0'S AND 2'S

// TIME COMPLEXITY O(N)
// SPACE COMPLEXITY O(1)
vector<int> helper(vector<int>&a,int n){
    int oc=0,zc=0,tc=0;
    for(int i=0;i<n;i++){
        if(a[i]==1) oc+=1;
        else if(a[i]==0)    zc+=1;
        else    tc+=1;
    }
    int idx=0;
    while(idx<n){
        for(int i=0;i<zc;i++){
            a[idx]=0;
            idx++;
        }
        for(int i=0;i<oc;i++){
            a[idx]=1;
            idx++;
        }
        for(int i=0;i<tc;i++){
            a[idx]=2;
            idx++;
        }
    }
    return a;
}

void print(vector<int> a){
    int n=a.size();
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
        print(helper(a,n));
    }

}
