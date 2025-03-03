#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int si, int ei)
{
    int pivot = arr[ei];
    int i = si - 1;
    for (int j = si; j < ei; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
        
    }
    
        swap(arr[i+1], arr[ei]);
    return i + 1;
}
int quickSelect(vector<int> &arr, int si, int ei, int k)
{
    if (si <= ei)
    {
        int pI = partition(arr, si, ei);
        if (pI == k)
            return arr[pI];
        else if (pI > k)
            return quickSelect(arr, si, pI - 1, k);
        else
            return quickSelect(arr, pI + 1, ei, k);
    }
    return -1;
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
        int k;
        cin >> k;
        int res = quickSelect(arr, 0, n - 1, k - 1);
        if (k <= 0 || k > n)
        {
            cout << "Not Present" << endl;
        }
        else
        {
            cout << res << endl;
        }
    }
    return 0;
}