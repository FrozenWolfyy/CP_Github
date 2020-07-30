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
//
// ll countw(string a,int idx){
//       int n=a.size();
//       ll res=0;
//       for(int i=idx;i<n-1;i++){
//             if(a[i]=='v' && a[i+1]=='v'){
//                   res+=1;
//             }
//       }
//       return res;
// }
//
// ll helper(string a){
//       int n=a.size();
//       ll res=0;
//       for(int i=0;i<n-2;i++){
//             if(a[i]=='v' && a[i+1]=='v'){
//                   for(int j=i+2;j<n;j++){
//                         if(a[j]=='o'){
//                               res+=countw(a,j);
//                         }
//                   }
//             }
//       }
//       return res;
// }
//
//
// void print(vector<int> a){
//     int n=a.size();
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }

ll countHelper(vector<int> x,int idx){
      ll start=x[idx];
      // int n=x.size();
      ll end=x.back()-x[idx];
      return (start*end);
}

ll helper(string a){
      int n=a.size();
      vector<int> x(n,0);
      for(int i=1;i<n;i++){
            if(a[i]=='v' && a[i-1]=='v'){
                  x[i]=x[i-1]+1;
            }
            else  x[i]=x[i-1];
      }
      ll res=0;
      for(int i=0;i<n;i++){
            if(a[i]=='o'){
                  res+=countHelper(x,i);
            }
      }
      return res;
}

int main(){
      string a;
      cin>>a;
      cout<<helper(a)<<endl;
      return 0;
}
