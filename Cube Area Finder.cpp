
//3
#include <iostream>
#include <math.h>

using namespace std;

class Cube
{
	public:
	long double length;
	
};

int main(){

Cube Cube1;
long double V;//hacim

do{
cout<<"Enter the length of one cube: "<<endl;
cin>> Cube1.length;

if(Cube1.length>=0){
	
	V=pow(Cube1.length,3);
	cout<<endl<<endl<<"Volume of Cube: "<< V<<endl;
}
}while(Cube1.length<=0);
	

	return 0;
}

