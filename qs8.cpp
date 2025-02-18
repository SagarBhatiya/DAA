#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int> &arr,int n,int &comp,int &shift){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            comp++;
            if(arr[j]<arr[mini]){
                mini=j;
            }
            swap(arr[mini],arr[i]);
           
        }
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
        selection_sort(arr,n,comp,shift);
        cout<<"Sorted Array"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparision:"<<comp<<endl;
        cout<<"Swap:"<<shift<<endl;
    }
    return 0;
}