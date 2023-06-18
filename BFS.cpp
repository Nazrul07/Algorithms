#include<bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    vector<vector<int> >adj;
public:
    Graph(int V)
    {
        this->V=V;
        adj.resize(V);
    }
    void addEdge(int v,int w)
    {
        adj[v].push_back(w);
    }
    void BFS(int location)
    {
        vector<bool> visited(V,false);
        queue<int> qu;
        visited[location]=true;
        qu.push(location);
        while(!qu.empty())
        {
            location=qu.front();
            cout<<location<<" ";
            qu.pop();
            for(auto ad: adj[location])
            {
                if(!visited[ad])
                {
                    visited[ad]=true;
                    qu.push(ad);
                }
            }
        }
    }
};
int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.addEdge(0, 3);

    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 1) \n";
    g.BFS(1);

    return 0;
}
