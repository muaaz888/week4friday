#include<iostream>
#include<windows.h>
using namespace std;
void a();
void w();
void I();
void s();
void aa();
void gotoxy(int x,int y);
main()
{
system ("cls");
a();
w();
I();
aa();
s();
}
void a()
{     gotoxy(21,15); 
        cout<<"           ##       "<<endl;
 gotoxy(21,16);
        cout<<"         #    #    "<<endl;
   gotoxy(21,17);
        cout<<"       #        #    "<<endl;
gotoxy(21,18);
        cout<<"      #    ###    #   "<<endl;
gotoxy(21,19);
        cout<<"     #              #   "<<endl;
gotoxy(21,20);
        cout<<"    #                #   "<<endl;
}
void w()
{
gotoxy(21,24);
             cout<<" #       #"<<endl;
 gotoxy(21,25);
             cout<<" #       #"<<endl;
 gotoxy(21,26);
             cout<<" #   #   #"<<endl;
gotoxy(21,27);
             cout<<" #   #   #"<<endl;
gotoxy(21,28);
             cout<<" # ## ## #   "<<endl;
}
void aa()
{     gotoxy(21,31); 
         cout<<"        ##       "<<endl;
 gotoxy(21,32);
         cout<<"     #     #    "<<endl;
   gotoxy(21,33);
         cout<<"    #       #    "<<endl;
gotoxy(21,34);
         cout<<"   #    ###  #   "<<endl;
gotoxy(21,35);
         cout<<"  #           #   "<<endl;
gotoxy(21,36);
         cout<<" #             #   "<<endl;
}
void I()
{
gotoxy(21,40);
                  cout<<"########"<<endl;
 gotoxy(21,41);
                  cout<<"    # "<<endl;
gotoxy(21,42);
                  cout<<"    #  "<<endl;
gotoxy(21,43);
                  cout<<"    #  "<<endl;
gotoxy(21,44);
                  cout<<"########  "<<endl;
}
void s()
{
gotoxy(21,48);
                  cout<<"        #####"<<endl;
 gotoxy(21,49);
                  cout<<"    # "<<endl;
gotoxy(21,50);
                  cout<<"       ###  "<<endl;
gotoxy(21,51);
                  cout<<"             #  "<<endl;
gotoxy(21,52);
                  cout<<"     #####  "<<endl;
}



void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}




