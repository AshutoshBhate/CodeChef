#include <bits/stdc++.h>
using namespace std;

void verdict(int games, vector<char>& sheet)
{
    char repeat_checker;
    int count = 1;
    
    repeat_checker = sheet.at(0);
    
    for(int i = 1; i < games; i++)
    {
       if(sheet.at(i) == repeat_checker)
       {
           repeat_checker = 'D';
           continue;
       }
       else if(sheet.at(i) != repeat_checker) 
       {
           count++;
           repeat_checker = sheet.at(i);
       }
    }
    cout<<count<<endl;
}

int main()
{
    int testcases, games;
    char move;
    
    
    cin>>testcases;
    while(testcases--)
    {
        vector<char> sheet(0);
        cin>>games;
        for(int i = 0; i < games; i++)
        {
            cin>>move;
            sheet.push_back(move);
        }
        verdict(games, sheet);
    }
    return 0;
        
}

