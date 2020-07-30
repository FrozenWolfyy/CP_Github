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


// COUNT THE TRIPLETS

// TIME COMPLEXITY O(NlogN)
// SPACE COMPLEXITY O(1)

int helper3(vector<int>&a,int n){
    int res=0,start=0,end=n-1,mid;
    sort(a.begin(),a.end());
    for(int i=n-1;i>=0;i--){
        start=0;
        end=i-1;
        while(end>start){
            mid=a[start]+a[end];
            if(mid==a[i]){
                res++;
                start++;
                end--;
            }
            else if(mid>a[i]){
                end--;
            }
            else{
                start++;
            }
        }
    }
    return res==0?-1:res;
}

// TIME COMPLEXITY O(N^2)
// SPACE COMPLEXITY O(N^2)

int helper2(vector<int> &a,int n){
    if(n<3) return -1;
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            map[a[i]+a[j]]+=1;
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        res+=map[a[i]];
    }
    return res==0?-1:res;
}




// TIME COMPLEXITY O(N^3)
// SPACE COMPLEXITY O(1)
int helper1(vector<int> &a,int n){
    if(n<3) return -1;
    int res=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]==a[k]){
                    res+=1;
                }
            }
        }
    }
    return res==0?-1:res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<helper3(a,n)<<endl;
    }
}
