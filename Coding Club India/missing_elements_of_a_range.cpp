#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <bits/stdc++.h>

#define push push_back
#define make make_pair

using namespace std;

void print(vector<int> a){
  for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

void helper(vector<int> &a,int l,int h){
  int n=a.size();
  vector<int>map(h-l+1,0);
  vector<int> res;
  for(int i=0;i<n;i++){
    if(a[i]>=l && a[i]<=h){
      map[a[i]-l]+=1;
    }
  }
  for(int i=l;i<=h;i++){
    if(map[i-l]==0){
      res.push(i);
    }
  }
  print(res);
}

int main(){
  int l;
  int h;
  cin>>l>>h;
  int n;
  cin>>n;
  vector<int> a(n,0);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  // l=50;
  // h=55;
  // vector<int> a={1,2,3,4,5}
  helper(a,l,h);

}
