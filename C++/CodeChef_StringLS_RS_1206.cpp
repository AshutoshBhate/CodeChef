#include <bits/stdc++.h>
using namespace std;

void verdict(int string_length, string str)
{
    string right_shift;
    right_shift = str[string_length - 1] + str;
    right_shift.erase(string_length);
    //cout<<right_shift<<endl;

    string left_shift;
    left_shift = str + str[0];
    left_shift.erase(0, 1);
    //cout<<left_shift<<endl;

    if(right_shift.compare(left_shift) == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main()
{
    int testcases; 
    string str;
    
    cin>>testcases;
    while(testcases--)
    {
        cin>>str;
        int string_length = str.length();
        verdict(string_length, str);
    }
}
