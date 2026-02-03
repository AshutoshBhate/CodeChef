#include <bits/stdc++.h>
using namespace std;

void verdict(long boss_health, long gun, long laser_first, long laser_second, long threshold)
{
    long laser_way = 0, gun_way = 0, intermediate = boss_health;
    
    while(intermediate > 0)
    {
        intermediate -= gun;
        gun_way++;
    }
    

    while(threshold > 0)
    {
        boss_health -= laser_first;
        laser_way++;
        threshold--;
        if(boss_health <= 0)
        {
            cout<<laser_way<<endl;
            return;
        }
    }
    while(boss_health > 0)
    {
        boss_health -= laser_second;
        laser_way++;
    }
    if(gun_way<laser_way)
    {
        cout<<gun_way<<endl;
    }
    else
    {
        cout<<laser_way<<endl;  
    }
    
}

int main()
{
        long testcases, boss_health, gun, laser_first, laser_second, threshold;
        
        cin>>testcases;
        while(testcases--)
        {
            cin>>boss_health>>gun>>laser_first>>laser_second>>threshold;
            verdict(boss_health, gun, laser_first, laser_second, threshold);
        }
        
        return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// void verdict(long boss_health, long gun, long laser_first, long laser_second, long threshold)
// {
//     long laser_way = 0, gun_way = 0, intermediate = boss_health;
    
//     while(intermediate > 0)
//     {
//         intermediate -= gun;
//         gun_way++;
//     }
    

//     while(threshold > 0 || boss_health > 0)
//     {
//         if(threshold > 0)
//         {
//             boss_health -= laser_first;
//             laser_way++;
//             threshold--;
//         }
        
//         if(boss_health <= 0)
//         {
//             cout<<laser_way<<endl;
//             return;
//         }
//         if(threshold == 0)
//         {
//             boss_health -= laser_second;
//             laser_way++;
//         }
//     }

//     if(gun_way<laser_way)
//     {
//         cout<<gun_way<<endl;
//     }
//     else
//     {
//         cout<<laser_way<<endl;  
//     }
    
// }

// int main()
// {
//         long testcases, boss_health, gun, laser_first, laser_second, threshold;
        
//         cin>>testcases;
//         while(testcases--)
//         {
//             cin>>boss_health>>gun>>laser_first>>laser_second>>threshold;
//             verdict(boss_health, gun, laser_first, laser_second, threshold);
//         }
        
//         return 0;
// }

