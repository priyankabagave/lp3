/* Online C++ Compiler and Editor */
#include <bits/stdc++.h>

using namespace std;
int knapsack(vector<int>&wt,vector<int>&val,int n,int w){
    vector<vector<int>> t(n+1,vector<int>(w+1));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<w+1;j++){
            if(i==0 || j==0) t[i][j]=0;
            else if(wt[i-1]<=j) t[i][j] = max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
            else t[i][j] = t[i-1][j];
        }
    }
    return t[n][w];
}
int main()
{
   vector<int> wt = {1, 2, 3, 8, 7, 4};
   vector<int> val ={20, 5, 10, 40, 15, 25};
   int n = wt.size();
   int w = 10;
   cout<<"Knapsack value is : "<<knapsack(wt,val,n,w);
   return 0;
}