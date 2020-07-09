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

static int res=0;


void recursiveHelper(vector<vector<char>>&a,int curRow,int curCol,int row,int col,int target){
      if(isValid(a,target)){
            ::res+=1;
      }
      if(curRow>=row || curCol>=col){
            return;
      }
      for(int i=curRow;i<row;i++){
            setRowZeros(a,i);
            helper(a,i+1,curCol,row,col,target);
            for(int i=curCol;i<col;i++){
                  setColZeros(a,j);
                  helper(a,i,j+1,row,col,target);
            }
      }
}


int helper(vector<vector<char>>& a,int row,int col,int target){
      recursiveHelper(a,-1,-1,row,col,target);
      int res=::res;
      ::res=0;
      return res;
}

int main(){
      int row,col,k;
      cin>>row>>col>>k;
      vector<vector<char>> a(row,vector<char>(col));
      for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                  cin>>a[i][j];
            }
      }
      cout<<helper(a,row,col,k)<<endl;
      return 0;
}
