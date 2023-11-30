#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
struct Activity
{
    int start,finish;
};
bool comp(Activity a1, Activity a2)
{
    return a1.finish < a2.finish;
}
void solve()
{
    int n,Max_Activity=1;
    cin>>n;
    Activity arr[n];
    vector<pair<int,int> > Selected_Activity;
    for(int i=0;  i<n ; i++)
    {
        cin>>arr[i].start>>arr[i].finish;
    }
    sort(arr,arr+n,comp);

    int i=0;
    Selected_Activity.push_back(make_pair(arr[i].start,arr[i].finish));
    for(int j=1 ; j<n ; j++)
    {
        if(arr[i].finish<=arr[j].start)
        {
            Max_Activity++;
            Selected_Activity.push_back(make_pair(arr[j].start,arr[j].finish));
            i=j;
        }
    }

    cout<<"Maximum Activity: "<<Max_Activity<<endl<<endl;
    cout<<"Following Activity are selected"<<endl;
    for(int i=0 ; i<Selected_Activity.size() ; i++)
    {
        cout<<"("<<Selected_Activity[i].first<<","<<Selected_Activity[i].second<<") ";
    }cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int TestCase=1;
    //cin>>TestCase;
    while(TestCase--)
    {
        solve();
    }
    return 0;
}
