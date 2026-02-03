#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t, N, K, elements_to_switch;
    cin>> t;
    
    while(t--)
    {
        cin>>N>>K;
        vector<int> answer(N, 0);
        
        elements_to_switch = K - 1;
        
        for(int i = 0; i < elements_to_switch; i++)
        {
            answer[i] = i + 1;
        }
        
        for(int i = elements_to_switch; i < N; i++)
        {
            answer[i] = N - i + elements_to_switch;
        }
        
        for(int i = 0; i < answer.size(); i++)
        {
            cout<<answer[i] << " ";
        }
        
        cout<<endl;
    }
    
    return 0;
}
