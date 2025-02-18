#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int> &arr,int n,int &comp,int &shift){
    for(int i=1;i<n;i++){
        int key =arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key ){
            comp++;
            arr[j+1]=arr[j];
            shift++;
            j--;
        }
        arr[j+1]=key;
        shift++;
    }
}
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int comp=0,shift=0;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        insertion_sort(arr,n,comp,shift);
        cout<<"Sorted Array"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparision:"<<comp<<endl;
        cout<<"Shift:"<<shift<<endl;
    }
    return 0;
}