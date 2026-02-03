#include <bits/stdc++.h>
using namespace std;

void verdict(int no_students, int min_votes, int votebank[])
{
    int* max_vec = new int[no_students];
    int count = 0, relate;
    
    for(int i = 0; i < no_students; i++)
    {
        max_vec[i] = 0;
    }
    
    for(int i = 0; i < no_students; i++)
    {
        if(votebank[i] != (i + 1))
        {
            relate = votebank[i];
            if(max_vec[relate - 1] != -1)
            {
                max_vec[relate - 1]++;
            }
            
        }
        else
        {
            max_vec[i] = -1;
        }
    }
    
    for(int i = 0; i < no_students; i++)
    {
        if(max_vec[i] >= min_votes)
        {
            count++;
        }
    }
    cout<<count<<endl;
}

int main()
{
    int testcases, no_students, min_votes, votes;
    
    cin>>testcases;
    while(testcases--)
    {
        
        cin>>no_students>>min_votes;
        int* votebank = new int[no_students];
        for(int i = 0; i < no_students; i++)
        {
            cin>>votebank[i];
        }
        verdict(no_students, min_votes, votebank);
    }
    
    return 0;
}
