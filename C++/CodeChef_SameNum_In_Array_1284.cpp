#include <bits/stdc++.h>
using namespace std;

void verdict(int num_elements, int A[], int B[])
{
    int C[num_elements];

    sort(A, A+num_elements);
    sort(B, B+num_elements, greater<int>());

    for(int i = 0; i < num_elements; i++)
    {
        C[i] = A[i] + B[i];
    }

    int checkervar = C[0];

    int i = 1;
    while(i < num_elements)
    {
        if(checkervar != C[i])
        {
            cout<<"-1"<<endl;
            return;
        }
        i++;
    }

    for(int i = 0; i < num_elements; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < num_elements; i++)
    {
        cout<<B[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int testcases, num_elements;
    
    cin>>testcases;
    while(testcases--)
    {
        cin>>num_elements;
        int A[num_elements];
        int B[num_elements];
        for(int i = 0; i < num_elements; i++)
        {
            cin>>A[i];
        }
        for(int i = 0; i < num_elements; i++)
        {
            cin>>B[i];
        }
        verdict(num_elements, A, B);
    }
    
    return 0;
}
