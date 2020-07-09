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



int main(){
      int t;
      cin>>t;
// AC x 10
// WA x 0
// TLE x 0
// RE x 0
      vector<int> a(4,0);
      string x;
      while(t--){
            cin>>x;
            if(x=="AC") a[0]+=1;
            else if(x=="WA")     a[1]+=1;
            else if(x=="TLE") a[2]+=1;
            else  a[3]+=1;
      }
      cout<<"AC"<<" x "<<a[0]<<endl;
      cout<<"WA"<<" x "<<a[1]<<endl;
      cout<<"TLE"<<" x "<<a[2]<<endl;
      cout<<"RE"<<" x "<<a[3]<<endl;
}
