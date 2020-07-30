#include<bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <stack>
#include <queue>
#include <unordered_map>
#include <time.h>

// #define int long long int
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define line cout << "\n" ;
using namespace std ;

// REARRAGE ARRAY ALTERNATIVELY

void print(vector<int> a){
    int n=a.size();
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}



// TIME COMPLEXITY O(N)
// SPACE COMPLEXITY O(N)
void helper(vector<int>&a,int n){
    vector<int> res;
    for(int i=0;i<n/2;i++){
        res.push_back(a[i]);
    }
    for(int i=n-1;i>=n/2;i--){
        res.push_back(a[i]);
    }
    int idx=0;
    int i=0;
    while(i<n){
        a[i]=res[idx+n/2];
        a[i+1]=res[idx];
        idx++;
        i+=2;
    }
    // print(res);
    print(a);
}
// TIME COMPLEXITY O(N^2)
// SPACE COMPLEXITY O(1)
void helper2(vector<int>&a,int n){
    int times=n/2, idx=0;
    while(times--){
        for(int i=idx;i<n;i++){
            swap(a[i],a[n-1]);
        }
        idx+=2;
    }
    print(a);
}



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        helper2(a,n);
    }

}








/*


#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long arr[n];
	    for(int i =0;i<n;i++)cin>>arr[i];
	    long maxEle  = arr[n-1]+1;


	    //multiplying every number by a number greater than maxEle to save
	    //it in   Dividend = Divisor * Quotient + Remainder form
	    //Dividend = number at arr[i] (stores both old and new)
	    //Divisor = maxEle +1, Quotient = new number , Remainder = old no


	    //multiplying all nos; by maxEle to covert to above form
	    //notice old element will be zero for now in all that means no old element
	    //since array begins from atleast 1;
	    for(int i =0;i<n;i++)arr[i]*=maxEle;

	    int minIndex = 1;
        for(int j=0;j<n/2;j++){
            //2*minIndex-1 gives index where next minimum no to be filled
            //j gives minimum index
            arr[2*minIndex-1] = arr[2*minIndex-1]+arr[j]/maxEle;
            minIndex++;
        }
        int maxIndex = 0;
        for(int j=n-1;j>=n/2;j--){
            //2*maxIndex gives index where next maximum no to be filled
            //j gives maximum next maximum no index
            arr[2*maxIndex] =arr[2*maxIndex]+arr[j]/maxEle;
            maxIndex++;
        }

        for(int i =0;i<n;i++){
            arr[i]=arr[i]%maxEle;
            cout<<arr[i]<<" ";
        }
        cout<<endl;

	}
	return 0;
}


*/
