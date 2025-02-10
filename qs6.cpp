#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int T;
    cin >> T;
    set<int> st;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            st.insert(arr[i]);
        }
        int key;
        cin >> key;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (st.find(arr[i] + key) != st.end())
                cnt++;
        }
        cout << cnt << endl;
    }
}