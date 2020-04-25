//4

#include <iostream>
#include <math.h>

using namespace std;

class Cube
{
	public:
	long double length;
	long double getVolume()
	{
		return length*length*length;
	}
	
};

int main(){

Cube Cube1;

do{
cout<<"Enter the length of one cube: "<<endl;
cin>> Cube1.length;

if(Cube1.length>=0){
	
Cube1.getVolume(); //deger alinda hafizada 
cout<<Cube1.getVolume()<<endl;
}
}while(Cube1.length<=0);
	

	return 0;
}



