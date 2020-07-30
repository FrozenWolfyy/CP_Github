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

##############PRINT 1D ARRAY##################

void print(vector<int> a){
    int n=a.size();
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


##############PRINT 2D ARRAY##################


void print2d(vector<vector<int>> a){
    int r=a.size();
    for(int i=0;i<r;i++){
        for(int j=0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

#########DEPTH OF A BINARY TREE#########

int maxDepth(TreeNode* root) {
    ::depth=0;
    findDepth(root,1);
    return ::depth;
}
void findDepth(TreeNode* Node, int depth){
    if(Node==NULL)  return;
    ::depth=max(::depth,depth);
    findDepth(Node->left,depth+1);
    findDepth(Node->right,depth+1);
}


############SUBSETS################

vector<vector<int>> subsets(vector<int> a){
    vector<vector<int>> res;
    vector<int> cur;
    int n=a.size();
    createSubsets(a,res,cur,0,n);
}
void createSubsets(vector<int> a, vector<vector<int>>&res, vector<int>& cur,int idx,int n){
    res.push_back(cur);
    for(int i=idx;i<n;i++){
        cur.push_back(a[i]);
        createSubsets(a,res,cur,i+1,n);
        cur.pop_back();
    }
}

##################################BINARY SEARCH########################

int binary_search(vector<int> a,int target){
    int n=a.size();
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start + (mid-start)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(a[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}


###################TO FIND THE RUNTIME OF YOUR CODE###############

double start=clock();
// RUN YOUR CODE
double end=clock();
cout<<"Time Taken to run :"<<((double) (end - start)) / CLOCKS_PER_SEC<<endl;


####################ITERATIVELY SUBSETS##########################

    vector<vector<int>> subsets2(vector<int>& nums) {
        vector<vector<int>>a;
        cout<<(1<<nums.size())<<endl;
        for(int b=0;b<(1<<nums.size());b++)
        {
            vector<int>s;
            for(int i=0;i<nums.size();i++)
            {
                if(b&(1<<i))
                    s.push_back(nums[i]);
            }
            a.push_back(s);
            s.clear();
        }
        print2d(a);
        return a;
    }

####################LINKED LIST SIZE#####################

int LinkedListSize(ListNode* p){
    int n=0;
    while(p!=NULL){
        n+=1;
        p=p->next;
    }
}


########################REVERSE A LINKED LIST###################

ListNode* helperReverse(ListNode* head){

}
