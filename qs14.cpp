#include <bits/stdc++.h>
using namespace std;
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
        int key;
        cin >> key;
        vector<int> ans;
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            int rem = key - arr[i];
            if (mpp.find(rem) != mpp.end())
            {
                ans.push_back(arr[i]);
                ans.push_back(rem);
                break;
            }
            mpp[arr[i]] = i;
        }
        if (ans.size() == 0)
            cout << "Not found" << endl;
        else
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
}