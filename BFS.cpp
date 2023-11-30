#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
void solve()
{
    int n,e;
    cin>>n>>e;
    vector<vector<int>> adj(n+1);
    for(int i=0 ; i<e ; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int s;
    cin>>s;
    vector<int> level(n+1,-1),Parent(n+1);
    level[s]=0;
    Parent[s]=-1;
    queue<int> qu;
    qu.push(s);
    cout<<s<<" ";
    while(qu.size())
    {
        int u=qu.front();
        qu.pop();
        sort(adj[u].begin(),adj[u].end());
        for(auto x: adj[u])
        {
            if(level[x]==-1)
            {
                Parent[x]=u;
                level[x]=level[u]+1;
                qu.push(x);
                cout<<x<<" ";
            }
        }
    }cout<<endl;

    /*cout<<"Level"<<endl;
    for(int i=1 ; i<=n ; i++)
    {
        cout<<level[i]<<" ";
    }cout<<endl;*/

    /*cout<<"Parent Node"<<endl;
    for(int i=1 ; i<=n ; i++)
    {
        cout<<i<<" "<<Parent[i]<<endl;
    }*/
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int TestCase=1;
    //cin>>TestCase;
    while(TestCase--)
    {
        solve();
    }
    return 0;
}
