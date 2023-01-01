#include<iostream>
using namespace std;
void price(string num1,float tprice);


main(){
float tprice;
string int1;
cout<<"Enter your country name (Pakistan,India,Ireland,England,Canada)  :"<<endl;
cin>>int1; 
cout<<"Enter  ticket price in Dollars  :  "<<endl;
cin>>tprice;

price(int1,tprice);

}


void price(string num1,float dprice)
   {
float obtickets;
cout<<"Enter How many tickets you have obtained   "<<endl;
cin>>obtickets;
float multiplyoftickets;
multiplyoftickets = obtickets*dprice;
float toprice;
if(num1=="pakistan"){
toprice =multiplyoftickets-(multiplyoftickets*5/100);
cout<<"Final Ticket Price of Pakistan is "<<toprice<<"Dollars"<<endl;
}
if(num1=="ireland"){
   toprice = multiplyoftickets-(multiplyoftickets*10/100);
    cout<<"Your Final ticket price of Ireland is  "<<toprice<<"Dollars"<<endl;
}
if(num1=="india"){
toprice =multiplyoftickets-(multiplyoftickets*20/100);
cout<<"Final Ticket Price of india is "<<toprice<<"Dollars"<<endl;
}
if(num1=="england"){
toprice =multiplyoftickets-(multiplyoftickets*30/100);
cout<<"Final Ticket Price of England is "<<toprice<<"Dollars"<<endl;
}
if(num1=="canada"){
toprice =multiplyoftickets-(multiplyoftickets*45/100);
cout<<"Final Ticket Price of canada  is "<<toprice<<"Dollars"<<endl;
}
   }
