#include<bits/stdc++.h>
using namespace std;

void verdict(int no_elements, int array[])
{
    int err_count = 0;
    bool flag = false;

    for (int i = 1; i < no_elements; i++)
    {
        if (array[i] != array[i-1])
        {
            if (flag == false)
                err_count = err_count + 2;
            else
                err_count++;
            
            flag = true;
        }
        else
            flag = false;
    }
    
    
    cout<<err_count<<endl;
}

int main()
{
    int testcases, no_elements;
    
    cin>>testcases;
    while(testcases--)
    {
        cin>>no_elements;
        int array[no_elements];
        for(int i = 0; i < no_elements; i++)
        {
            cin>>array[i];
        }
        verdict(no_elements, array);
    }
    
    return 0;
}
