#include <bits/stdc++.h>
using namespace std;

void energy(int room_array[], int rooms)
{
    int sum = 0;
    
    sort(room_array, room_array + rooms);
    for(int i = 0; i < (rooms-1); i++)
    {
        sum += (room_array[i] * room_array[i+1]);
    }
    cout<<sum<<endl;
}

int main()
{
    int rooms;
    
    cin>>rooms;
    int room_array[rooms];
    for(int  i = 0;  i < rooms; i++)
    {
        cin>>room_array[i];
    }
    energy(room_array, rooms);
    
    return 0;
}
