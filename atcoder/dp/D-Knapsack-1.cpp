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

void print2d(vector<vector< long long int>> a){
    int r=a.size();
    int c=a[0].size();
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

long long helper(vector<vector< long long int>>a, int target){
  int n=a.size();
  vector<vector<long long int>>dp(target+1,vector<long long int>(n,0));
  sort(a.begin(),a.end());
    if(target==0) return 0;
    if(target<a[0][0])  return 0;
    int idx=0;
    // print2d(a);
  for(int i=1;i<=target;i++){
    if(i%a[0][0]==0){
        idx=i;
        break;
    }
  }
    for(int i=idx;i<=target;i++){
        dp[i][0]=a[0][1];
    }


    for(int i=1;i<=target;i++){
        for(int j=1;j<n;j++){
            dp[i][j]=max(dp[i][j-1],( (i-a[j][0]>=0) ? (dp[i-a[j][0]][j-1] + a[j][1]) : 0 ));
        }
    }
    // print2d(dp);

  return dp[target][n-1];
}


int main(){
  int n;
   int k;
   cin>>n>>k;
   vector<vector<long long int >> a(n,vector<long long int>(2,0));
   for(int i=0;i<n;i++){
     cin>>a[i][0]>>a[i][1];
   }

    long long int res=helper(a,k);
  cout<<res<<endl;
}
