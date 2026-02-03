#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x;
    cin>>t;
    
    while(t--)
    {
        cin>>x;
        
        int even_count = 0, odd_count = 0;
        
        for(int i = 1; i<= x; i++)
        {
            if(i % 2 == 0 && x % i == 0)
            {
                even_count++;
            }
            if(i % 2 != 0 && x % i == 0)
            {
                odd_count++;
            }
            else
            {
                continue;
            }
        }
        
        cout<<odd_count<<" "<<even_count;
        cout<<endl;
    }
    
    
}
