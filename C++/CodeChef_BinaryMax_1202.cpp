#include <bits/stdc++.h>
using namespace std;

void verdict(vector<int>& bit_array)
{
    bool flag;
    
    vector<int> occurrence(0);
    if(bit_array[0] == 0)
    {
        flag = true;
        occurrence.push_back(1);
        
        for(int i = 1; i < bit_array.size(); i++)
        {
            if(bit_array[i] == 1 && flag == true)
            {
                flag = false;
            }
            else if(bit_array[i] == 0 && flag == false)
            {
                flag = true;
                occurrence.push_back(1);
            }
            
        }
        cout<<occurrence.size()<<endl;
    }
    else if(bit_array[0] == 1)
    {
        flag = false;
        occurrence.push_back(1);

        for(int i = 1; i < bit_array.size(); i++)
        {
            if(bit_array[i] == 0 && flag == false)
            {
                flag = true;
                occurrence.push_back(1);
            }
            else if(bit_array[i] == 1 && flag == true)
            {
                flag = false;
            }
        }
        cout<<occurrence.size()<<endl;
    }
    
}

int main()
{
    int testcases, bitsize, dummy_number, conversion;
    
    
    cin>>testcases;
    while(testcases--)
    {
        vector<int> bit_array(0);
        cin>>dummy_number;
        char bit_string[dummy_number - 1];

        for(int i = 0; i < (dummy_number - 1); i++)
        {
            cin>>bit_string[i];
            bit_array.push_back((bit_string[i] - 48));
        }

        // for(int i = 0; i < bit_array.size(); i++)
        // {
        //     cout<<bit_array[i]<<" ";
        // }
        
        verdict(bit_array);
    }
    
    return 0;
}
