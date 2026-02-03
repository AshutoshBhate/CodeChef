#include <bits/stdc++.h>
using namespace std;

void verdict(long num_leaf, long large, long small)
{
    long count = 0;
    
    // while(small > 2 && large > 0)
    // {
    //     small -= 3;
    //     large -= 1;
    //     count++;
    // }
    // while(large > 1)
    // {
    //     large -= 2;
    //     count++;
    // }

    count = min(large, small / 3) + (large - min(large, small / 3)) / 2;

    if(count >= num_leaf)
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
    long num_leaf, large, small;
    
    cin>>testcases;
    while(testcases--)
    {
        cin>>num_leaf>>large>>small;
        verdict(num_leaf, large, small);
    }
    
    return 0;
}
