#include <bits/stdc++.h>
using namespace std;

void verdict(vector<int>& treearray)
{
    vector<int> hasharray(0);
    vector<int> :: iterator itr;
    for(int i = 0; i < treearray.size(); i++)
    {
        auto itr = find(hasharray.begin(), hasharray.end(), treearray[i]);
        if(itr == hasharray.end())
        {
            hasharray.push_back(treearray[i]);
        }
    }
    cout<<hasharray.size()<<endl;

    // unordered_set<int> random_hashset(treearray.begin(), treearray.end());      //Ensures all the elements are unique
    // cout <<random_hashset.size() << endl;
}

int main()
{
    int testcases, num_elements, number;
    
    cin>>testcases;
    while(testcases--)
    {
        vector<int> treearray(0);
        cin>>num_elements;
        for(int i = 0; i < num_elements; i++)
        {
            cin>>number;
            treearray.push_back(number);
        }
        verdict(treearray);
    }
    
    return 0;
}
