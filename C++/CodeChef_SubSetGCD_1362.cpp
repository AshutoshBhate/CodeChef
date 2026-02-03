#include<bits/stdc++.h>
using namespace std;

void verdict(int no_elements, int subarray_length)
{
    int gcd_one = no_elements/subarray_length;

    for(int i = 1; i <= subarray_length; i++)
    {
        cout<<(gcd_one * i)<<" ";
    }
}

int main()
{
    int testcases, no_elements, subarray_length;

    cin>>testcases;
    while(testcases--)
    {
        cin>>no_elements>>subarray_length;

        verdict(no_elements, subarray_length);
        cout<<endl;
    }

    return 0;
}