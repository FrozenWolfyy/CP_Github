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


// LARGEST NUMBER FORMED FROM AN ARARY


// TIME COMPLEXITY O()
// SPACE COMPLEXITY O()

bool sortHelper(string a,string b){
    int n1=a.size();
    int n2=b.size();
    int n3=min(n1,n2);
    for(int i=0;i<n3;i++){
        if(a[i]>b[i]){
            return true;
        }
    }
}

int helper(vector<string>&a,int n){
    sort(a.begin(),a.end(),sortHelper);

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<string>a(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<helper(a,n)<<endl;
    }

}
