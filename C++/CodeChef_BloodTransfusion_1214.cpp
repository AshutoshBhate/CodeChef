#include <bits/stdc++.h>
using namespace std;

void max_chain(vector<string>& donor_array)
{
    int type_hash[4] = {0};
    int A_Addition = 0, B_Addition = 0;
    
    for(int i = 0; i < donor_array.size(); i++)
    {
        if(donor_array[i] == "O")
        {
            type_hash[0]++;
        }
        if(donor_array[i] == "A")
        {
            type_hash[1]++;
        }
        if(donor_array[i] == "B")
        {
            type_hash[2]++;
        }
        if(donor_array[i] == "AB")
        {
            type_hash[3]++;
        }
    }
    
    A_Addition = type_hash[0] + type_hash[1] + type_hash[3];
    B_Addition = type_hash[0] + type_hash[2] + type_hash[3];
    if(A_Addition > B_Addition)
    {
        cout<<A_Addition<<endl;
    }
    else
    {
        cout<<B_Addition<<endl;
    }
}

int main()
{
    int testcases, num_donors;
    string donor;
    
    cin>>testcases;
    while(testcases--)
    {
        vector<string> donor_array(0);
        cin>>num_donors;
        for(int i = 0; i < num_donors; i++)
        {
            cin>>donor;
            donor_array.push_back(donor);
        }
        max_chain(donor_array);
    }
    
    return 0;
}
