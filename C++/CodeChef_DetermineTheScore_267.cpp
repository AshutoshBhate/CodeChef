#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    int x1;
    int x2;
    
    cin>>testcase;
    
    while(testcase--)
    {
        cin>>x1;
        cin>>x2;
        
        cout<<int(int(x1/10) * x2)<<endl;
    }
    
    return 0;
}
