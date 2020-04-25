//6
#include <iostream>
#include <math.h>

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

cout<<"Enter the short lenght of Rectangular: "<<endl;
cin>>Rectangle1.long_lenght;	

cout<<"Enter the long lenght of Rectangular: "<<endl;
cin>>Rectangle1.short_lenght;

cout<<Rectangle1.get_Area()<<endl;

	return 0;
}
