#include <bits/stdc++.h>
using namespace std;

void verdict(string bit_string)
{
    int add_bit = 0;
    
    for(int i = 0; i < bit_string.length(); i++)
    {
        add_bit += (bit_string[i] - 48);
    }
    //cout<<"Value of add_bit is: "<<add_bit<<endl;
    
    if(add_bit == 1 || add_bit == (bit_string.length() - 1))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}

int main()
{
    int testcases;
    string bit_string;
    
    cin>>testcases;
    while(testcases--)
    {
        cin>>bit_string;
        verdict(bit_string);
    }
    
    return 0;
}
