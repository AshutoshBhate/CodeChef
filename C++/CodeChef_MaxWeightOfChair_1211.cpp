#include <bits/stdc++.h>
using namespace std;

void verdict(vector<int>& weights)
{
    int sub_max = 0, max_weight = 0;
    
    sort(weights.begin(), weights.end());
    
    for(int i = 0; i < weights.size(); i++)
    {
        sub_max = weights[i] * (weights.size() - i);
        if(max_weight < sub_max)
        {
            max_weight = sub_max;
        }
    }
    
    cout<<max_weight<<endl;
}

int main()
{
    int testcases, num_element, element;
    
    cin>>testcases;
    while(testcases--)
    {
        cin>>num_element;
        vector<int> weights;
        for(int i = 0; i < num_element; i++)
        {
            cin>>element;
            weights.push_back(element);
        }
        verdict(weights);
    }
    
    return 0;
}
