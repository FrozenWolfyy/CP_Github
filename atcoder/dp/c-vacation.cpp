#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define push push_back
#define make make_pair

int vacationHelper(vector<vector<int>> a){
    int r=a.size();
    int c=a[0].size();
    vector<vector<int>> dp(r,vector<int>(c,0));
    for(int i=0;i<c;i++){
        dp[0][i]=a[0][i];
    }
    for(int i=1;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<c;k++){
                if(k!=j){
                    dp[i][j]=max(dp[i][j],dp[i-1][k]+a[i][j]);
                }
            }
        }
    }
    int m=INT_MIN;
    for(int i=0;i<c;i++){
      m=max(dp[r-1][i],m);
    }
    return m;
}


int main(){
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int> (3,0));
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    int res=vacationHelper(a);
    cout<<res<<endl;
    return 0;
}
