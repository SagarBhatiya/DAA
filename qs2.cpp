#include <iostream>
#include <vector>
using namespace std;

void binary_Search(const vector<int>arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int comp = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        comp++;
        if (arr[mid] == key)
        {

            cout << "Present " << comp << endl;
            return;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Not present " <<comp<< endl;
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
        int key;
        cin >> key; 
        binary_Search(arr, key);
    }
}