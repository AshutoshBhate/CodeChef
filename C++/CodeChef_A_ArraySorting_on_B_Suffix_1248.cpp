#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& A_Array, vector<int>& B_Array)
{
    int suffix;
    
    suffix = B_Array[B_Array.size() - 1];
    sort(A_Array.begin() + (A_Array.size() - suffix), A_Array.end());
    for(int i = 0; i < A_Array.size(); i++)
    {
        cout<<A_Array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int testcases, A, B, A_length, B_length;
    
    cin>>testcases;
    while(testcases--)
    {
        cin>>A_length>>B_length;
        vector<int> A_Array(0);
        vector<int> B_Array(0);
        for(int i = 0; i < A_length; i++)
        {
            cin>>A;
            A_Array.push_back(A);
        }
        for(int i = 0; i < B_length; i++)
        {
            cin>>B;
            B_Array.push_back(B);
        }
        
        sortArray(A_Array, B_Array);
    }
    
    return 0;
}
