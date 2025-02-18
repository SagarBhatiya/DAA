#include <bits/stdc++.h>
using namespace std;
bool hasDuplicate(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            return true;
    }
    return false;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (hasDuplicate(arr, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}