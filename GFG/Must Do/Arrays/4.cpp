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

// MISSING NUMBER IN AN ARRAY


// TIME COMPLEXITY O(N)
// SPACE COMPLEXITY O(N)
int helper1(vector<int>&a,int n){
    vector<int> map(n+1,0);
    for(int i=0;i<n-1;i++){
        map[a[i]]+=1;
    }
    for(int i=0;i<n;i++){
        if(map[i]!=1){
            return i;
        }
    }
}

// TIME COMPLEXITY O(N)
// SPACE COMPLEXITY O(1)
int helper2(vector<int>&a,int n){
    int s=0;
    for(auto x:a){
        s+=x;
    }
    return (n)*(n+1)/2-s;
}



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n-1,0);
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        cout<<helper(a,n)<<endl;
    }
}
