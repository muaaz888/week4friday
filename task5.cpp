#include<iostream>
#include<windows.h>
using namespace std;
void a();
void L();
void I();
void gotoxy(int x,int y);
main()
{
system ("cls");
a();
L();
I();
}
void a()
{     gotoxy(21,15); 
   cout<<"       ##       "<<endl;
   gotoxy(21,16);
    cout<<"     #    #    "<<endl;
   gotoxy(21,17);
cout<<"    #      #    "<<endl;
gotoxy(21,18);
cout<<"   #  ##    #   "<<endl;
gotoxy(21,19);
cout<<"  #          #   "<<endl;
gotoxy(21,20);
cout<<" #             #   "<<endl;
}
void L()
{
gotoxy(37,16);
    cout<<" #"<<endl;
 gotoxy(37,17);
cout<<" # "<<endl;
gotoxy(37,18);
cout<<" #  "<<endl;
gotoxy(37,19);
cout<<" #  "<<endl;
gotoxy(37,20);
cout<<" #########   "<<endl;
}
void I()
{
gotoxy(48,16);
    cout<<"########"<<endl;
 gotoxy(48,17);
cout<<"    # "<<endl;
gotoxy(48,18);
cout<<"    #  "<<endl;
gotoxy(48,19);
cout<<"    #  "<<endl;
gotoxy(48,20);
cout<<"########  "<<endl;
}



void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}




