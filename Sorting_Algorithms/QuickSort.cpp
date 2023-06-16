#include<bits/stdc++.h>
using namespace std;
int Pivot(int arr[],int low,int high)
{
    int Piv=arr[high];
    int temp=low;
    for(int i=low ; i<=high-1 ; i++)
    {
        if(arr[i]<Piv)
        {
            swap(arr[temp],arr[i]);
            temp++;
        }
    }
    swap(arr[temp],arr[high]);
    return temp;
}
void QuickSort(int arr[],int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int pi=Pivot(arr,low,high);
    QuickSort(arr,low,pi-1);
    QuickSort(arr,pi+1,high);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    QuickSort(a,0,n-1);
    for(int i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
