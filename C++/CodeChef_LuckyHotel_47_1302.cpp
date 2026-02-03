#include <bits/stdc++.h>
using namespace std;

void verdict(long long num)
{
    while(num % 7 != 0 && num > 7)
    {
        num -= 4;  
    }
    if(num < 7 && num % 4 != 0)
    {
        cout<<"-1"<<endl;
    }
    else if(num < 7 && num % 4 == 0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<num<<endl;
    }
    
}   

int main()
{
    long long testcases, number;
    
    cin>>testcases;
    while(testcases--)
    {
        cin>>number;
        verdict(number);
    }
    
    return 0;
}
