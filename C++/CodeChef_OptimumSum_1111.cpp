#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases, array_length, element;
    
    cin>>testcases;
    while(testcases--)
    {
        int negative_sum = 0, ultra_max_no = 0, max_no = 0;

        cin>>array_length;
        vector<int> array(0);
        for(int i = 0; i < array_length; i++)
        {
            cin>>element;
            array.push_back(element);
        }

        sort(array.begin(), array.end());

        int limit = (array.size()/2);
        for(int i = 0; i < limit; i++)
        {
            negative_sum += array[i];
        }

        for(int j = 0; j < array_length; j++)
        {
            ultra_max_no += array[j];
        }
        
        max_no = ultra_max_no - (2 * negative_sum);
        cout<<max_no<<endl;
    }
    return 0;
}
