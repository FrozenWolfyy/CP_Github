#include<bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>


#define ll long long
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define line cout << "\n" ;
using namespace std ;

void print(vector<int> a){
    int n=a.size();
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int helper(int n,vector<int> pre){
      int start=0;
      int end=pre.size();
      while(end>=start){
            int mid=start+(end-start)/2;
            if(pre[mid]==n){
                  return mid+1;
            }
            else if(pre[mid]>n){
                  end=mid-1;
            }
            else{
                  start=mid+1;
            }
      }
      return -1;
}

void precompute(vector<int> &pre){
      pre.push_back(4);
      pre.push_back(7);
      int temp=pre[0];
      int idx=0;
      int pushtemp=0;
      while(pushtemp!=777777777){
            temp=pre[idx];
            pushtemp=temp*10+4;
            pre.push_back(pushtemp);
            pushtemp=temp*10+7;
            pre.push_back(pushtemp);
            idx++;
      }
}

int main(){
      vector<int> pre;
      precompute(pre);
      // print(pre);
      int n;
      cin>>n;
      cout<<helper(n,pre)<<endl;
      return 0;
}
