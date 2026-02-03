#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, N, K;
    cin>>t;
    while(t--)
    {
        cin>>N>>K;
        
        if((K % 10 == 0 && (K/10) == N) || (K % 11 == 0 && (K/10) == N) || (K % 12 == 0 && (K/10) == N))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(K < 10 * N || K > 12 * N)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
}
