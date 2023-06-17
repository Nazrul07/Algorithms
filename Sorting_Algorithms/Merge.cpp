#include<bits/stdc++.h>
using namespace std;
void Marge(int arr[],int left,int mid,int right)
{
    int LAS=(mid-left)+1;
    int RAS=right-mid;
    int LA[LAS+1],RA[RAS+1];
    for(int i=0 ; i<LAS ; i++)
    {
        LA[i]=arr[left+i];
    }
    for(int i=0 ; i<RAS ; i++)
    {
        RA[i]=arr[mid+i+1];
    }
    LA[LAS]=INT_MAX;
    RA[RAS]=INT_MAX;
    int i=0,j=0,k=left;
    while(i<LAS || j<RAS)
    {
        if(LA[i]<RA[j])
        {
            arr[k++]=LA[i++];
        }
        else
        {
            arr[k++]=RA[j++];
        }
    }
}
void devide(int arr[],int left,int right)
{
    if(left>=right)
    {
        return;
    }
    int Mid=left+(right-left)/2;
    devide(arr,left,Mid);
    devide(arr,Mid+1,right);
    Marge(arr,left,Mid,right);
}
void Print(int arr[],int Size)
{
    for(int i=0 ; i<Size ; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
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
    devide(a,0,n-1);
    Print(a,n);
    return 0;
}
