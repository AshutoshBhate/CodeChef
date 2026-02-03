#include <bits/stdc++.h>
using namespace std;

void verdict(vector<char>& input_string, vector<char>& query_string)
{
    vector<long> hash_array(0);

    for(long j = 0; j < query_string.size(); j++)
    {
        input_string.push_back(query_string[j]);
    }

    long master_count = 0, sub_count = 1;
    char dummy_char;

    dummy_char = input_string[0];
    hash_array.push_back(1);
    for(long i = 1; i < input_string.size(); i++)
    {
        if(input_string[i] == dummy_char)
        {
            sub_count++;

            if(sub_count>master_count)
            {
                master_count = sub_count;
            }

            hash_array.push_back(master_count);
        }
        else
        {
            dummy_char = input_string[i];
            if(sub_count>master_count)
            {
                master_count = sub_count;
            }
            sub_count = 1;
            hash_array.push_back(master_count);
        }
    }
    for(long h = (hash_array.size() - (query_string.size() + 1)); h < hash_array.size(); h++)
    {
        cout<<hash_array[h]<<" ";
    }
}

int main()
{
    long testcases, string_length, queries;
    char character, query;
    
    cin>>testcases;
    while(testcases--)
    {
        cin>>string_length>>queries;
        vector<char> input_string(0);
        vector<char> query_string(0);
        
        for(long i = 0; i < string_length; i++)
        {
            cin>>character;
            input_string.push_back(character);
        }

        for(long i = 0; i < queries; i++)
        {
            cin>>query;
            query_string.push_back(query);
        }

        verdict(input_string, query_string);
        cout<<endl;
    }

    return 0;    
}