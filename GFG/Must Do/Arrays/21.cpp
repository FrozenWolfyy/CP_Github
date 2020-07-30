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


// LAST INDEX OF 1

// TIME COMPLEXITY O(N)
// SPACE COMPLEXITY O(1)
int helper(string a){
    int n=a.size();
    for(int i=n-1;i>=0;i--){
        if(a[i]=='1'){
            return i;
        }
    }
    return -1;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        cout<<helper(a)<<endl;
    }

}
