

#include <bits/stdc++.h>
using namespace std;
int dp[100][100];


int knapsack(int wt[], int val[], int w, int n){
    
    if(w<0 or n<0)
        return 0;
    
    if(dp[n][w] != -1)          
        return dp[n][w];
        
    if(wt[n]>w)
    {
        dp[n][w]= knapsack(wt,val,w,n-1);
        return dp[n][w];
    }
    else
    {

        dp[n][w]= max( knapsack(wt,val,w-wt[n],n-1)+val[n],
                      knapsack(wt,val,w, n-1));
        return dp[n][w];
    }
}

int main()
{
    int w,n;
    cout<<"Enter the no. of items: ";
    cin>>n;
   
    cout<<"Enter capacity of knapsack: ";
    cin>>w;
   
    dp[n][w];
    memset(dp, -1, sizeof(dp));
    
    int val[n];
    int wt[n];
    cout<<"\nItem Value \t Item Weight\n";
    for(int i=0; i<n;i++)
    {
        cin>>val[i]>>wt[i];
    }
 
    cout<<"\nMaximum Profit is: "<<knapsack(wt,val,w,n-1);
    return 0;
}


