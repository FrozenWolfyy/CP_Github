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




// TIME COMPLEXITY O(N)
// SPACE COMPLEXITY O(N)
vector<int> helper(vector<int>&a,int n){
    int temp=a[n-1];
    vector<int> res;
    res.push_back(temp);
    if(n==1)    return res;
    for(int i=n-2;i>=0;i--){
        if(a[i]>=temp){
            temp=a[i];
            res.push_back(temp);
        }
    }
    reverse(res.begin(),res.end());
    return res;
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
