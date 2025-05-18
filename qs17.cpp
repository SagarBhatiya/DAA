#include <bits/stdc++.h>
using namespace std;
bool bfs(unordered_map<int, vector<int>> &adj, vector<int> &color,int currNode,int currColor){
queue<int> q;
    q.push(currNode);
    color[currNode]=currColor;
    while(!q.empty()){
        int u =q.front();
        q.pop();
        for(int &v:adj[u]){
            if(color[v]==color[u]) return false;
            else if(color[v]==-1){
                color[v]=!color[u];
                q.push(v);
            }
        }
    }
    return true;
}

int main()
{
    unordered_map<int, vector<int>> mp;
    int e, n;

    cout << "Enter no. of edges" << endl;
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cout << "Enter edge " << i + 1 << " (u, v): ";
        cin >> u >> v;
        mp[u].push_back(v);
        mp[v].push_back(u);
    }
    cout << "Enter no. of nodes" << endl;
    cin >> n;
    vector<int> color(n, -1);
    for (int i = 0; i < n; i++)
    {
        if (color[i] == -1)
        {
            if (!bfs(mp, color, i, 1))
            {
                cout << "Not Bipartite" << endl;
                break;
            }
            else     cout << "Bipartite" << endl;
        }
    }



    return 0;
}