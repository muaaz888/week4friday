#include<iostream>
using namespace std;
void userdays(float time);


main(){

int free;
userdays(free);
}


void userdays(float time)

{
float days;
cout<<"Enter  your holidays days  "<<endl;
cin>>days;

float working;
float timegames;
working = 365-days;
timegames=(working*63 + 127*days);
float normtime =30000;
float difference1 ;
difference1 = (normtime - timegames);
int hhour;
hhour = (difference1/60);

if(hhour>=50){
cout <<" Tom sleep well   "<<hhour<<"  Less : for play";

} 
if(hhour <50){
cout <<"Tom will run away   "<<hhour<<"  hours  : for play";

}
      }



