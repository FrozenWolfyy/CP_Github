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


// SPIRALLY TRANSVERSING A MATRIX

// TIME COMPLEXITY O(N*M)
// SPACE COMPLEXITY O(N*M)

vector<int> spiralOrder(vector<vector<int>>& a) {
        vector<int> b;
        int n1=a.size();
        if(n1==0)   return b;
        int n2=a[0].size();
        if(n1==0 || n2==0)  return b;

        int top=0;
        int bottom=n1-1;
        int left=0;
        int right =n2-1;
        int size = n1*n2;

        while(b.size()<size)
        {
            for(int i=left;i<=right && b.size()<size ;i++)
            {
                b.push_back(a[top][i]);
            }
                top++;
            for(int i=top;i<=bottom && b.size()<size ;i++)
            {
                b.push_back(a[i][right]);
            }
                right--;
            for(int i=right;i>=left && b.size()<size ;i--)
            {
                b.push_back(a[bottom][i]);
            }
                bottom--;
            for(int i=bottom;i>=top && b.size()<size ;i--)
            {
                b.push_back(a[i][left]);
            }
                left++;
        }
        return b;
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

    int t,m,n;
    cin>>t;
    while(t--){
        cin>>m>>n;
        vector<vector<int>>a(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        // helper(a,m,n);
        print(spiralOrder(a));
    }

}
