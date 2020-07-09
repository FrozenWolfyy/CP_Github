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
//////////////////ORDER OF N^2/////////////////////
//////////////////////////////////////////////////
void helper(vector<int> &a,int k){
  int n=a.size();
  vector<int> res;
  int sum=0;
  for(int i=0;i<n;i++){
    sum=0;
    for(int j=i;j<n;j++){
      sum+=a[j];
      res.push_back(sum);
    }
  }
  sort(res.begin(),res.end());

  print(res);
  }


///////////USE PRIORITY QUEUE OF MIN HEAP////////////////////
////////////TO REDUCE THE SPACE COMPLEXITY///////////////////

int main(){
  // int k;
  // cin>>k;
  // vector<int> a;
  // int temp=0;
  // while(temp!=-1){
  //   cin>>temp;
  //   a.push(temp);
  // }
  // a.pop_back();
  vector<int> a={20,-5,-1};
  int k=4;
  helper(a,k);

}
