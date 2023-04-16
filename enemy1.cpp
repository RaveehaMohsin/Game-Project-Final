#include <iostream>
#include <windows.h>
using namespace std;

char player[3][13] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '_', ' ', ' ', ' '},
                      {' ', ' ', '|', ' ', ' ', '.', ' ', '.', ' ', ' ', '|', ' ', ' '},
                      {'|', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', '|'}};

void print();

main()
{
    print();
}

void print()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            cout << player[i][j];
        }
        cout << endl;
    }
}