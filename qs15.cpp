#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;

    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else
        {
            cout << a[i++] << " ";
            j++;
        }
    }
}