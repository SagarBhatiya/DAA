#include <iostream>
#include <vector>
using namespace std;
void linear_search(const vector<int> &arr, int key)
{
    int comp = 0;
    for (int num : arr)
    {
        comp++;
        if (num == key)
        {
            cout << "Present " << comp << endl;
            return;
        }
    }
    cout << "Not Present " << comp << endl;
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
        linear_search(arr, key);
    }
}
