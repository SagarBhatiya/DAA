#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void jump_Search(const vector<int> &arr, int key)
{
    int n = arr.size();
    int i = 0;
    int jump = sqrt(n);
    while (i < n && arr[i] < key)
    {
        i += jump;
    }

    int start = max(i - jump, 0);
    int end = min(i, n);
    bool found = false;
    for (int j = start; j <= end; j++)
    {
        if (arr[j] == key)
        {
            cout << "Found" << endl;
            found = true;
            return;
        }
    }
    if (!found)
    {
        cout << "Not Found" << endl;
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int key;
        cin >> key;
        jump_Search(arr, key);
    }
}