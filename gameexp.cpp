#include <iostream>
#include<windows.h>
using namespace std;
// void gotoxy(int x,int y);
char p1 = 223;
char p2 = 175;
char p3 = 168;
// int malikX=10;
// int malikY=30;
char malik[3][5] = {{p1, p1, p1,' ',' '},
                    {p1, p1, p1, '-', p2},
                    {'0', ' ', '0', ' ', ' '}};
void printMalik();
main()
{
    printMalik();
}

void printMalik()
{
    for(int i=0;i<3;i++)
    {
       
        for(int j=0;j<5;j++)
        {
            cout << malik[i][j];
        }
        cout<<endl;
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
