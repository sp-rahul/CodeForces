
#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;

main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    cin>>t;
    while(t--)
    {
        ll n,m,x,y,sum=0,cnt = 0;
        cin>>n>>m;
        vector<int >ar(m);
        for(int i=0;i<m;i++)
        {
            cin>>ar[i];
            --ar[i];
        }
        sort(ar.begin(),ar.end());
        vector<int> v(m);
        for(int i=0;i<m-1;i++)
        {
            v[i]=ar[i+1]-ar[i]-1;
        }
        v[m-1]=ar[0]+n-ar[m-1]-1;
        sort(v.rbegin(),v.rend());
        int safe=0;
        for(int i=0;i<m;i++)
        {
            int snum=v[i]- 4*i;
            if(snum>0)
            {
                safe+=max(1,snum-1);
            }

        }
        cout<<n-safe<<endl;




    }

    return 0;
}
