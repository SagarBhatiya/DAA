#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; ++j)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int quickSelect(vector<int> &arr, int low, int high, int k)
{
    if (low <= high)
    {
        int pI = partition(arr, low, high);

        if (pI == k)
        {
            return arr[pI];
        }
        else if (pI > k)
        {
            return quickSelect(arr, low, pI - 1, k);
        }
        else
        {
            return quickSelect(arr, pI + 1, high, k);
        }
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

        if (k <= 0 || k > n)
        {
            cout << "not present" << endl;
        }
        else
        {

            int result = quickSelect(arr, 0, n - 1, k - 1);
            cout << result << endl;
        }
    }

    return 0;
}
