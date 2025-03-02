#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int si, int ei, int &comp, int &swapCnt)
{
    int i = si - 1;
    int pivot = arr[ei];
    for (int j = si; j <= ei - 1; j++)
    {
        comp++;
        if (arr[j] < pivot)
        {

            i++;
            swap(arr[i], arr[j]);
            swapCnt++;
        }
    }
    swap(arr[i + 1], arr[ei]);
    swapCnt++;
    return i + 1;
}
void quickSort(vector<int> &arr, int si, int ei, int &comp, int &swapCnt)
{
    if (si < ei)
    {
        int pI = partition(arr, si, ei, comp, swapCnt);
        quickSort(arr, si, pI - 1, comp, swapCnt);
        quickSort(arr, pI + 1, ei, comp, swapCnt);
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int comparision = 0;
        int swapCnt = 0;
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        quickSort(arr, 0, n - 1, comparision, swapCnt);
        cout << "After Sorting" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "Comparision:" << comparision << endl;
        cout << "Swap:" << swapCnt << endl;
    }
}
