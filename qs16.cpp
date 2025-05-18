#include <bits/stdc++.h>
using namespace std;
bool check(unordered_map<int, vector<int>> &mp, int S, int D, vector<bool> &visited)
{
    if (S == D)
        return true;
    if (visited[S] == true)
        return false;
    visited[S] = true;
    for (auto &node : mp[S])
    {
        if (check(mp, node, D, visited))
            return true;
    }
    return false;
}
int main()
{
    unordered_map<int, vector<int>> mp;
    int e, n;
    int source, destination;
    cout << "Enter source and destination node" << endl;
    cin >> source >> destination;
    
    
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
    vector<bool> visited(n, false);
    bool checked = check(mp, source, destination, visited);
    if (checked)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;   

    return 0;
}