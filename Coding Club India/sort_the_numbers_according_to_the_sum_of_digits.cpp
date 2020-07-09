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
int sumDigits(int a){
  int sum=0;
  int rem=0;
  while(a!=0){
    rem=a%10;
    a=a/10;
    sum+=rem;
  }
  return sum;
}

void helper(vector<int> &a){
  int n=a.size();
  vector<int> res;
  vector<vector<int>> s;
  for(int i=0;i<n;i++){
    s.push({sumDigits(a[i]),a[i]});
  }
  sort(s.begin(),s.end());
  for(int i=0;i<n;i++){
    res.push(s[i][1]);
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
