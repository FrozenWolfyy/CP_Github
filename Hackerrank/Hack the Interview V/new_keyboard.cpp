#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

int main(){
      string a;
      cin>>a;

      int n=a.size();
      string res;
      int idx=0;
      bool numlock=false;
      for(int i=0;i<n;i++){
            if(a[i]=='<'){
                  idx=0;
            }
            else if(a[i]=='>'){
                  idx=res.size();
            }
            else if(a[i]=='*'){
                  res.erase(idx-1,1);
            }
            else if(a[i]=='#'){
                  numlock=!numlock;
            }
            else if(a[i]>='0' && a[i]<='9'){
                  if(!numlock){
                        res.insert(res.begin()+idx,a[i]);
                        idx++;
                  }
            }
            else{
                  res.insert(res.begin()+idx,a[i]);
                  idx++;
            }
      }
      cout<<res<<endl;
}
