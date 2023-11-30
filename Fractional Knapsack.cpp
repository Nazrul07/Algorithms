#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
bool comp(pair<int,int> a, pair<int,int> b)
{
    return (double)a.first/a.second >= (double)b.first/b.second;
}
void solve()
{
    int Items,W;
    cin>>Items>>W;
    vector<double> Amount_Taken(Items,0.00);
    vector<pair<int,int> > pr;
    for(int i=0 ; i<Items ;i++)
    {
        int weight,price;
        cin>>price>>weight;
        pr.push_back(make_pair(price,weight));
    }
    sort(pr.begin(), pr.end(),comp); //Sorting Accoding to Unit Price

    cout<<"Sorting According To Unit Price"<<endl;
    for(int i=0 ; i<Items ; i++)
    {
        cout<<pr[i].first<<" "<<pr[i].second<<endl;
    }cout<<endl;

    int i;
    double U=W;
    for(i=0 ; i<Items ; i++)
    {
        if(pr[i].second>U)
        {
            break;
        }
        Amount_Taken[i]=1.0;
        U-=pr[i].second;
        //cout<<U<<endl;
    }
    if(i<Items)
    {
        Amount_Taken[i]=U/pr[i].second;
    }

    cout<<"Amount Taken"<<endl;
    double Max_Price=0.00;
    for(i=0 ; i<Items ; i++)
    {
        cout<<setprecision(2)<<fixed<<Amount_Taken[i]<<" ";
        Max_Price+=Amount_Taken[i]*pr[i].first;
    }cout<<endl<<endl;

    cout<<"Max Price: "<<setprecision(2)<<fixed<<Max_Price;
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
