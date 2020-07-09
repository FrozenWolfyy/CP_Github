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

bool isPrime(int n){
  if(n==2)  return true;
  for(int i=2;i<=n/2;i++){
    if(n%2==0){
      return false;
    }
  }
  return true;
}

void helper(vector<int> &a){
  int n=a.size();
  vector<int> x;
  for(int i=0;i<n;i++){
    if(isPrime(a[i])){
      x.push(a[i]);
    }
  }
  int idx=x.size()-1;
  sort(x.begin(),x.end());

  for(int i=0;i<n;i++){
    if(isPrime(a[i])){
      a[i]=x[idx--];
    }
  }
print(a);
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
