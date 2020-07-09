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

int helper(int n,int target){
      int res=0;
      while(target>n){
            res+=1;
            target-=n;
      }
      return res+1;
}

int main(){
      int n,target;
      cin>>n>>target;
      cout<<helper(n,target)<<endl;
      return 0;
}
