#include <bits/stdc++.h>
using namespace std;

void origin(long root)
{
    long long origin_count = 0;
    long sub_count = 0;
    
    if(root < 10)
    {
        for(long i = 1; i <= root; i++)
        {
            origin_count += i;
        }
    }
    else
    {
        while(root != 9)
        {
            long sub_number = root;
            sub_count = sub_number % 10;
            if(sub_number >= 10)
            {
                sub_number = sub_number/10;
            }
            origin_count += sub_count;
            origin_count += sub_number;
            root--;
        }
        origin_count += 45;
    }
    
    cout<<origin_count<<endl;
}

int main()
{
    long testcases, root;
    
    cin>>testcases;
    while(testcases--)
    {
        cin>>root;
        origin(root);
    }
    
    return 0;
}
