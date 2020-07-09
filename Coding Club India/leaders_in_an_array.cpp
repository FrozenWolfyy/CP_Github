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

void helper(vector<int> &a){
  int n=a.size();
  vector<int> res;
  int temp=a[n-1];
  res.push(temp);
  for(int i=n-2;i>=0;i--){
    if(a[i]>temp){
      temp=a[i];
      res.push(a[i]);
    }
  }
print(res);
}

int main(){
  // int n;
  // cin>>n;
  vector<int> a;
  int temp=0;
  while(temp!=-1){
    cin>>temp;
    a.push(temp);
  }
  a.pop_back();
  // vector<int> a={1,2,3,4,5}
  helper(a);

}
