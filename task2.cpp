#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();


main()
{ 
  system("cls");
}
void printmaze()
{
cout<<"********************";
cout<<"*                   *";
cout<<"*                   *";
cout<<"*                   *";
cout<<"*                   *";
cout<<"*                   *";
cout<<"*********************";
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}