//8
#include <iostream>
#include <math.h>
#include <unistd.h>//sleep



const double PI=3.14519; //tanimladi
using namespace std;


class Circle
{
public:
	float radius;
	float get_Circumference();
};

float Circle::get_Circumference() //defibed outside so it is more readebility
{
	return 2*PI*radius;
}

int main(){

Circle Circle1;//object created

cout<<"Enter the radius of circle: "<<endl;
cin>>Circle1.radius;
cout<<endl<<endl<<endl<<Circle1.get_Circumference()<<endl;

sleep (1);
//system("cls");
return 0;
}

