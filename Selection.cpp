#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++)
    {
        int Min=a[i],Pos=-1;
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[j]<Min)
            {
                Min=a[j];
                Pos=j;
            }
        }
        if(Pos!=-1)
        {
            swap(a[i],a[Pos]);
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}
