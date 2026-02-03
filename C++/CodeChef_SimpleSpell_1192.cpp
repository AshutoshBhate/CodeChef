#include <bits/stdc++.h>
using namespace std;

void verdict(int num_element, vector<char>& string_array)
{
    int first_ascii = 0, second_ascii = 0;
    
    // for(int i = 0; i < string_array.size(); i++)
    // {
    //     cout<<string_array[i];
    // }

    for(int i = 0; i < (num_element - 1); i++)
    {
        first_ascii = (int)string_array[i];
        second_ascii = (int)string_array[i + 1];

        // cout<<first_ascii<<" ";
        // cout<<second_ascii<<" ";

        if(first_ascii > second_ascii)
        {
            string_array.erase(string_array.begin() + i);
            break;
        }
        else if(i == (num_element - 2))
        {
            string_array.erase(string_array.begin() + i + 1);
            break;
        }
    }
    for(int i = 0; i < string_array.size(); i++)
    {
        cout<<string_array[i];
    }
    cout<<endl;
}

int main()
{
    int testcases, num_element;
    char element;
    vector<char> string_array(0);
    
    cin>>testcases;
    while(testcases--)
    {
        cin>>num_element;
        for(int i = 0; i < num_element; i++)
        {
            cin>>element;
            string_array.push_back(element);
        }
        
        verdict(num_element, string_array);
        string_array.clear();
    }
    
    return 0;
}
