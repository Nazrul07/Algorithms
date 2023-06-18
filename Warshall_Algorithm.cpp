#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int adj[n][n],p[n][n];
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cin>>adj[i][j];
            if(adj[i][j]==0)
            {
                p[i][j]=0;
            }
            else
            {
                p[i][j]=1;
            }
        }
    }
    for(int k=0 ; k<n ; k++)
    {
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                p[i][j]=p[i][j] || (p[i][k] && p[k][j]);
            }
        }
        cout<<"P"<<k+1<<endl;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cout<<p[i][j]<<" ";
            }cout<<endl;
        }cout<<endl;
    }
    return 0;
}
