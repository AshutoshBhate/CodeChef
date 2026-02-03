#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, A, B;
    cin>> t;
    
    while(t--)
    {
        cin>>A>>B;
        
        if(A >= 1 && B % A == 0)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
        
        cout<<endl;
    }
    
}
