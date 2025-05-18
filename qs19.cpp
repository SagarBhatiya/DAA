#include <bits/stdc++.h>
using namespace std;
vector<int> dijikstra(int n, vector<vector<pair<int, int>>> &adj, int S)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>> pq;
    vector<int> res(n, INT_MAX);
    res[S] = 0;
    pq.push({0, S});
    while (!pq.empty())
    {
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for (auto &vec : adj[node])
        {
            int adjNode = vec.first;
            int wt = vec.second;
            if (d + wt < res[adjNode])
            {
                res[adjNode] = d + wt;
                pq.push({d + wt, adjNode});
            }
        }
    }
    return res;
}
int main()
{

    int e, n;
    int source, destination;
    cout << "Enter source node" << endl;
    cin >> source;

    cout << "Enter no. of edges" << endl;
    cin >> e;
    cout << "Enter no. of nodes" << endl;
    cin >> n;
    
        vector<vector<pair<int, int>>> vec(n);
    for (int i = 0; i < e; i++)
    {
        int u, v, wt;
        cout << "Enter edge " << i + 1 << " (u, v): ";
        cin >> u >> v >> wt;
        vec[u].push_back({v, wt});
        vec[v].push_back({u, wt});
    }

    vector<int> res = dijikstra(n, vec, source);
    for (auto &it : res)
        cout << it << " ";
    cout << endl;
    return 0;
}