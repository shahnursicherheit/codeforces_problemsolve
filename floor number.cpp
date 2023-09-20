#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(int i=0;i>=0;i++)
        {
            int c=(i*x+2);
            if(c>=n)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}