#include<iostream>
using namespace std;
void challan(float speed);


main(){
float speed;
cout<<"Enter  speed in Km/h   "<<endl;
cin>>speed;

challan(speed);





}


void challan(float userspeed)

{if(userspeed>100){
cout<<"Halt .....You Will be Challanged !!!<<endl";}
if(userspeed<=100){cout<<"Perfect !You are going good."<<endl;
}
}
