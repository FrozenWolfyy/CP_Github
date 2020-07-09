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

int hammingDistance(string x, string y){
      // cout<<y<<endl;
      int n=x.size();
      int res=0;
      for(int i=0;i<n;i++){
            if(x[i]!=y[i]){
                  res+=1;
            }
      }
      return res;
}

int helper(string x,string y){
      int n1=x.size() , n2=y.size();
      int res=0;
      for(int i=0;i<n2-n1+1;i++){
            res+=hammingDistance(x,y.substr(i,n1));
      }
      return res;
}

int main(){
      string x,y;
      cin>>x;
      cin>>y;
      cout<<helper(x,y)<<endl;
}
