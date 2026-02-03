#include<bits/stdc++.h>
using namespace std;

void verdict(vector<string>& word_array)
{
    string encompass = "";
    vector<int> complete_meal(6);
    vector<int> :: iterator itr;

    for(int i = 0; i < word_array.size(); i++)
    {
        encompass = encompass + word_array[i];
    }
    for(int i = 0; i < encompass.length(); i++)
    {
        if(encompass[i] == 'c')
        {
            complete_meal[0]++;
        }
        if(encompass[i] == 'o')
        {
            complete_meal[1]++;
        }
        if(encompass[i] == 'd')
        {
            complete_meal[2]++;
        }
        if(encompass[i] == 'e')
        {
            complete_meal[3]++;
        }
        if(encompass[i] == 'h')
        {
            complete_meal[4]++;
        }
        if(encompass[i] == 'f')
        {
            complete_meal[5]++;
        }
    }
    complete_meal[0] = (complete_meal[0]/2);
    complete_meal[3] = (complete_meal[3]/2);

    itr = find(complete_meal.begin(), complete_meal.end(), 0);
    if(itr == complete_meal.end())
    {
        cout<<"No zeroes found!"<<endl;
    }

    sort(complete_meal.begin(), complete_meal.end());
    cout<<complete_meal[0]<<endl;
}

int main()
{
    int testcases, num_strings;
    string words;
    
    cin>>testcases;
    while(testcases--)
    {
        vector<string> word_array(0);
        
        cin>>num_strings;
        for(int i = 0; i < num_strings; i++)
        {
            cin>>words;
            word_array.push_back(words);
        }
        
        verdict(word_array);
    }

    return 0;
}
