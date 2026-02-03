#include<bits/stdc++.h>
using namespace std;

void verdict(vector<int>& array, int edge_lit)
{
    vector<int> hasharray(0);
    vector<int> :: iterator iter;

    int sum = 0, count = 0;

    for(iter = array.begin(); iter != array.end(); iter++)
    {
        if(*iter >= edge_lit)
        {
            hasharray.push_back(*iter);
            *iter = 0;
        }
    }

    for(int i = 0; i < array.size(); i++)
    {
        if(array[i] != 0)
        {
            sum += array[i];
        }
        if(sum >= edge_lit)
        {
            count++;
            sum = 0;
        }
        if(array[i] == 0)
        {
            sum = 0;
        }
    }

    cout<<count + hasharray.size()<<endl;
}

int main()
{
   int testcases, no_elements, edge_lit, element;
   
   cin>>testcases;
   
   while(testcases--)
   {
       vector<int> array(0);
       
       cin>>no_elements>>edge_lit;
       
       for(int i = 0; i < no_elements; i++)
       {
           cin>>element;
           array.push_back(element);
       }

        //for(int i = 0; i < N; i++)
        //{
        //  cout<<array[i];
        //}
       
       verdict(array, edge_lit);
    }
    
    return 0;
}
