#include <bits/stdc++.h>
using namespace std;

vector<int> :: iterator itr;

void currentpeople(int array_no, vector<int>& people)
{
    vector<int> in_office(0);
    int sub_count = 0, max_count = 0;
    
    for(int i = 0; i < array_no; i++)
    {
        auto itr = find(in_office.begin(), in_office.end(), people[i]);
        
        if(itr == in_office.end())
        {
            in_office.push_back(people[i]);
            sub_count = in_office.size();
            if(sub_count > max_count)
            {
                max_count = sub_count;
            }
        }
        else
        {
            in_office.erase(itr);
        }
    }
    cout<<max_count<<endl;
}

int main()
{   
    int array_no, testcases, number;
    
	cin>>testcases;
    while(testcases--)
    {
        vector<int> people(0);
        cin>>array_no;
    	for(int i = 0; i < array_no; i++)
    	{
    	    cin>>number;
    	    people.push_back(number);
    	}
        currentpeople(array_no, people);
    }
	
    return 0;
}
