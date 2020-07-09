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

int helper(int n){

      return 1000-n%1000==1000?0:1000-n%1000;
}

int main(){
      int n;
      cin>>n;
      cout<<helper(n)<<endl;
      return 0;
}
