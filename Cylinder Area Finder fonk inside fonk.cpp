//10

#include <iostream>
#include <math.h>
#include <unistd.h>//sleep



const double PI=3.14519; //tanimladi
using namespace std;

class Circle
{
	public:
		float radius;
		float get_Area();
};



class Cylinder
{
public:
	Circle base; //tabana alana verilen isim
	float height;
		float get_Volume(); //cunku silindirib hacmi var

};

float Circle::get_Area(){
	return PI*radius*radius;
}

float Cylinder::get_Volume(){
	return base.get_Area()*height;
}



int main(){
	Cylinder Cylinder1; //circle zaten olustu
	
	cout<<"Enter the height: "<<endl;
	cin>>Cylinder1.height;
	
	
	cout<<"Enter the radius: "<<endl;
	cin>>Cylinder1.base.radius;
	
	cout<<"Volume: "<<Cylinder1.get_Volume()<<endl;
	cout<<"Area: "<<Cylinder1.base.get_Area()<<endl;
	
	


	return 0;
}
