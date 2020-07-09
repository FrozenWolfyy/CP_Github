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

ll helper(int n){
      ll f1=1;
      ll f2=1;
      ll f3=1;
      ll f4=1;
      int temp=n;
      for(int i=0;i<7;i++){
            f4*=temp;
            temp--;
            if(i==4){
                  f1=f4;
            }
            if(i==5){
                  f2=f4;
            }
            if(i==6){
                  f3=f4;
            }
      }
      f4=5*4*3*2;
      return (f1/f4 + f2/(6*f4) + f3/(7*6*f4) );
}

int main(){
      int n;
      cin>>n;
      cout<<helper(n)<<endl;
}
