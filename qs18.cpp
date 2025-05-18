#include<bits/stdc++.h>
using namespace std;
int topoSort(int n,vector<vector<int>> &adj){
    vector<int> inDegree(n,0);
    for(int u=0;u<n;u++){
        for(auto &v:adj[u]){
            inDegree[v]++;
        }
    }
    int cnt = 0;
    queue<int> q;
    for(int i=0;i<n;i++){
        if(inDegree[i]==0){
            q.push(i);
            cnt++;
        }
    }
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int &v:adj[u]){
            inDegree[v]--;
            if(inDegree[v]==0){
                q.push(v);
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
     int n, e;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> e;

    vector<vector<int>> adj(n);
    cout << "Enter " << e << " directed edges (u v):\n";
    for (int i = 0; i < e; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    int cnt = topoSort(n,adj);
    if(cnt == n) cout<<"Cycle\n";
    else cout<<"Not Cycle\n";
    return 0;
}