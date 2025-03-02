#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int si, int mid, int ei, int &comp)
{
    vector<int> temp;
    int left = si;
    int right = mid + 1;
    while (left <= mid && right <= ei)
    {
        comp++;
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left++]);
        }
        else
        {
            temp.push_back(arr[right++]);
        }
    }
    while (left <= mid)
    {

        temp.push_back(arr[left++]);
    }
    while (right <= ei)
    {

        temp.push_back(arr[right++]);
    }
    for (int i = 0; i < temp.size(); i++)
    {
        arr[si + i] = temp[i];
    }
}
void mergeSort(vector<int> &arr, int si, int ei, int &comp)
{

    if (si < ei)
    {
        int mid = si + (ei - si) / 2;
        mergeSort(arr, si, mid, comp);
        mergeSort(arr, mid + 1, ei, comp);
        merge(arr, si, mid, ei, comp);
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int comparision = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        mergeSort(arr, 0, n - 1, comparision);
        cout << "After Sorting" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "Comparision:" << comparision << endl;
    }

    return 0;
}