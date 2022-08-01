
#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
/*
Time complexity: O(n).
Explanation: Here in array is checked if the array is descending order or not. When array is not in descending order the we make a flag value 1 for checking
if flag is 1 then output is "No". Else "Yes".
*/
main()
{

    int t=1;
    cin>>t;
    while(t--)
    {
        ll n,x,sum=0,cnt = 0;
        cin>>n;
        ll ar[n+5];

        for(int i=1; i<=n; i++)
        {
            cin>>ar[i];
            if(ar[i]%2==0) cnt++;
        }

        sum=n-cnt;
        cnt=min(cnt,sum);
        cout<<cnt<<endl;




    }

    return 0;
}
