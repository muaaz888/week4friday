#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();
void playermove(int x,int y);


main()
{ 
  system("cls");
  printmaze();
  int x=3;
   int y =2;
   while(true){

   playermove(x,y);
   if(y < 10){
   y =y+1;}

     
   if(y ==10){

gotoxy(x,y-1);
cout<<"   ";
y=2;
}

              }
}
void printmaze()
{
cout<<"**********************"<<endl;
cout<<"*                    *"<<endl;
cout<<"*                    * "<<endl;
cout<<"*                    *" <<endl;
cout<<"*                    *"<<endl;
cout<<"*                    *"<<endl;
cout<<"**********************"<<endl;
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void playermove(int x,int y)
{
   gotoxy(x,y-1);
   cout<<"  ";
   gotoxy(x,y);
   cout<<" p  ";
   Sleep(300);

}