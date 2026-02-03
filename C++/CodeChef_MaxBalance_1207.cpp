#include <bits/stdc++.h>
using namespace std;

void beststring(int str_length, string str)
{
    int maxbalance = 0, balance = 0;
    
    
    for(int i = 0; i < str_length; i++)
    {
        if(str[i] == '(')
        {
            balance += 1;
        }
        else if(str[i] == ')')
        {
            balance -= 1;
        }

        //cout<<"Balance is: "<<balance<<endl;
        maxbalance = max(maxbalance,  balance);
        //cout<<"MaxBalance is: "<<maxbalance<<endl;

    }

    char correct_string[2*(maxbalance)];
    
    for(int i = 0; i < (maxbalance); i++)
    {
        correct_string[i] = '(';
        correct_string[i + maxbalance] = ')';
    }
    for(int i = 0; i < (2*(maxbalance)); i++)
    {
        cout<<correct_string[i];
    }

    cout<<endl;
}

int main()
{
    int testcases;
    string str;
    
    cin>>testcases;
    while(testcases--)
    {
        cin>>str;
        int str_length = str.length();
        beststring(str_length, str);
    }
    
    return 0;
}
