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
        vector<char> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> cnt(123, 0);
        for (auto &it : arr)
        {
            cnt[it - 'a']++;
        }
        int maxi = 0;
        char ch = '\0';
        for (int i = 0; i < 26; i++)
        {
            if (maxi < cnt[i])
            {
                maxi = cnt[i];
                ch = i + 'a';
            }
        }
        cout << ch << ":" << maxi;
    }
}