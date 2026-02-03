#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b, g;
    cin>>b>>g;
    b += 1;
    
    int total_pizza = 4*b + 3*g;
    
    if((total_pizza % 8) == 0)
    {
        cout << total_pizza/8;
    }
    else
    {
        cout << (total_pizza/8) + 1;
    }
}
