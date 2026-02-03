#include <bits/stdc++.h>
using namespace std;

void verdict(int num_string, int accesslimit, string bitstring)
{
    bool flag = false;
    int current_access_counter = 0;
    
    for(int i = 0; i < num_string; i++)
    {
        if(bitstring[0] == '0')
        {
            cout<<"NO"<<endl;
            return;
        }
        if(bitstring[i] == '1')
        {
            current_access_counter = accesslimit;
        }
        if(bitstring[i] == '0')
        {
            current_access_counter--;
            if(current_access_counter < 0)
            {
                flag = true;
                break;
            }
        }
    }
    if(flag == true)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
    
}

int main()
{
    int testcases, num_string, accesslimit;
    string bitstring;
    
    cin>>testcases;
    while(testcases--)
    {
        cin>>num_string>>accesslimit;
        cin>>bitstring;
        verdict(num_string, accesslimit, bitstring);
    }
    
    return 0;
}
