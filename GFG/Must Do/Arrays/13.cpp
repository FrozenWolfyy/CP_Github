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




// TIME COMPLEXITY O()
// SPACE COMPLEXITY O()
vector<int> helper(vector<int>&a,int n,int k){
    int idx=0, idxtot=0;
    vector<int> res;
    while(idxtot<n){
        vector<int> temp;
        while(idx<k && idxtot<n){
            temp.push_back(a[idxtot]);
            idxtot++;
            idx++;
        }
        reverse(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            res.push_back(temp[i]);
        }
        temp.clear();
        idx=0;
    }
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
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int>a(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        print(helper(a,n,k));
    }

}
