
//7
#include <iostream>
#include <math.h>
#include <unistd.h>//sleep



using namespace std;


class Rectangle
{
public:
	float long_lenght;
	float short_lenght;
	float get_Area();
};

float Rectangle::get_Area() //defibed outside so it is more readebility
{
	return short_lenght*long_lenght;
}

int main(){
Rectangle Rectangle1;
Rectangle Rectangle2;

cout<<"Enter the short lenght of Rectangular 1: "<<endl;
cin>>Rectangle1.long_lenght;	

cout<<"Enter the long lenght of Rectangular 1: "<<endl;
cin>>Rectangle1.short_lenght;

cout<<endl<<endl<<Rectangle1.get_Area()<<endl;

sleep (1);
system("cls");



cout<<"Enter the short lenght of Rectangular 2: "<<endl;
cin>>Rectangle2.long_lenght;

cout<<"Enter the long lenght of Rectangular 2: "<<endl;
cin>>Rectangle2.short_lenght;

cout<<endl<<endl<<Rectangle2.get_Area()<<endl;




	return 0;
}
