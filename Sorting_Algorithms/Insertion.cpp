#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n+1];
   a[0]=INT_MIN;
   for(int i=1 ; i<=n ; i++)
   {
     cin>>a[i];
   }
   for(int i=2 ; i<=n ; i++)
   {
     for(int j=i-1 ; j>=0 ; j--)
     {
       if(a[j+1]<a[j])
       {
         swap(a[j+1],a[j]);
       }
       else
       {
         break;
       }
     }
   }
   for(int i=1 ; i<=n ; i++)
   {
     cout<<a[i]<<" ";
   }cout<<endl;
   return 0;
}
