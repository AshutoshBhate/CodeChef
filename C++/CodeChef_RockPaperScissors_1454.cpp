#include <bits/stdc++.h>
using namespace std;

void verdict(vector<char>& moves, long long num_symbols)
{
    long long permissible_losses;
    vector<char> retaliation(0);
    
    for(long long i = 0; i < num_symbols; i++)
    {
        if(moves[i] == 'R')
        {
            retaliation.push_back('P');
        }
        if(moves[i] == 'S')
        {
            retaliation.push_back('R');
        }
        if(moves[i] == 'P')
        {
            retaliation.push_back('S');
        }
    }
    
    permissible_losses = (num_symbols - ((num_symbols/2) + 1));
    long long i = 0;
    while(permissible_losses > 0 && i < num_symbols)
    {
        if(retaliation[i] != 'P')
        {
            retaliation[i] = 'P';
            i++;
            permissible_losses--;
        }
        else
        {
            i++;
        }
    }
    for(long long i = 0; i < retaliation.size(); i++)
    {
        cout<<retaliation[i];
    }
    cout<<endl;
}

int main()
{
    long long testcases, num_symbols;
    char move;
    
    cin>>testcases;
    while(testcases--)
    {
        vector<char> moves(0);

        cin>>num_symbols;
        for(long long i = 0; i < num_symbols; i++)
        {
            cin>>move;
            moves.push_back(move);
        }
        
        verdict(moves, num_symbols);
    }
    
    return 0;
}
