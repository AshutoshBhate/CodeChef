#include <bits/stdc++.h>
using namespace std;

void maxsum(int arr[], int n)
{
    sort(arr, arr + n);
    // for(int i = 0; i < n; i++)
    //     {
    //         cout<<arr[i]<<" ";
    //     }

    int c = 2*(arr[0] - arr[n - 1]);
    cout<<abs(c)<<endl;
}

int main()
{
    int testcases, no_elements;
    
    cin>>testcases;
    while(testcases--)
    {
        cin>>no_elements;
        int arr[no_elements];
        for(int i = 0; i < no_elements; i++)
        {
            cin>>arr[i];
        }
        maxsum(arr, no_elements);
    }
}
