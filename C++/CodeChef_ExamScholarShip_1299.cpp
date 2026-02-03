#include <bits/stdc++.h>
using namespace std;

void verdict(vector<int>& mark_structure)
{
    float hash_array[4] = {0};
    
    for(int i = 0; i < mark_structure.size(); i++)
    {
        if(mark_structure[i] == 2)
        {
            hash_array[0]++;
        }
        if(mark_structure[i] == 3)
        {
            hash_array[1]++;
        }
        if(mark_structure[i] == 4)
        {
            hash_array[2]++;
        }
        if(mark_structure[i] == 5)
        {
            hash_array[3]++;
        }
    }
    if(hash_array[0] > 0)
    {
        cout<<"No"<<endl;
        return;
    }
    if(hash_array[3] == 0)
    {
        cout<<"No"<<endl;
        return;
    }
    float average = (2 * hash_array[0] + 3 * hash_array[1] + 4 * hash_array[2] + 5 * hash_array[3])/(hash_array[0] + hash_array[1] + hash_array[2] + hash_array[3]);
    cout<<"Average is: "<<average<<endl;
    if(average < 4.0)
    {
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
}

int main()
{
    int testcases, num_elements, element;
    
    cin>>testcases;
    while(testcases--)
    {
        vector<int> mark_structure(0);
        cin>>num_elements;
        for(int i = 0; i < num_elements; i++)
        {
            cin>>element;
            mark_structure.push_back(element);
        }
        verdict(mark_structure);
    }
    
    return 0;
}
