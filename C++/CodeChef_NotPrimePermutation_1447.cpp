#include<bits/stdc++.h>
using namespace std;

bool isPrime(long n)
{
	if (n < 0)
    {
        return false;
    }
		
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
			
    }
	return true;
}

void verdict(vector<long>& num_array)
{
    long max_count = 0, array_sum = 0, checker;
    
    for(int i = 0; i < num_array.size(); i++)
    {   
        array_sum += num_array[i];
        checker = num_array[i];
        while(isPrime(checker))
        {
            checker++;
            max_count++;
        }
    }
    if(max_count > array_sum)
    {
        cout<<"-1";
    }
    else
    { 
        cout<<"Possible"<<endl;
    }
}

int main()
{
    long testcases, num_elements, element;
    
    cin>>testcases;
    while(testcases--)
    {
        vector<long> num_array(0);
        
        cin>>num_elements;
        for(int i = 0; i < num_elements; i++)
        {
            cin>>element;
            num_array.push_back(element);
        }
        verdict(num_array);
    }
    
    return 0;
}
