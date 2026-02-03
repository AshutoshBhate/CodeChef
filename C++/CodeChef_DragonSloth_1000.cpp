#include <bits/stdc++.h>
using namespace std;

int testcase;

void winner(int array[2][3]);

int main()
{
  cin >> testcase;
  int arr[2][3];
  for (int i = 0; i < testcase; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      for (int k = 0; k < 3; k++)
      {
        cin >> arr[j][k];
      }
    }
    winner(arr);
  }
  return 0;
}

void winner(int array[2][3])
{
  int sumarr1 = 0;
  int sumarr2 = 0;
  for (int i = 0; i < 3; i++)
  {
    sumarr1 = sumarr1 + array[0][i];
    sumarr2 = sumarr2 + array[1][i]; // Corrected line
  }

  if (sumarr1 > sumarr2)
  {
    cout << "DRAGON" << endl;
  }
  else if (sumarr1 < sumarr2)
  {
    cout << "SLOTH" << endl;
  }
  else
  {
    if (array[0][0] > array[1][0])
    {
      cout << "DRAGON" << endl;
    }
    else if (array[0][0] < array[1][0])
    {
      cout << "SLOTH" << endl;
    }
    else if (array[0][1] > array[1][1])
    {
      cout << "DRAGON" << endl;
    }
    else if (array[0][1] < array[1][1])
    {
      cout << "SLOTH" << endl;
    }
    else if (array[0][2] > array[1][2])
    {
      cout << "DRAGON" << endl;
    }
    else if (array[0][2] < array[1][2])
    {
      cout << "SLOTH" << endl;
    }
    else
    {
      cout << "TIE" << endl;
    }
  }
}
