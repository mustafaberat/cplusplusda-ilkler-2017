//1
/*
smell of food is not object 
it must be in the shape.
class: Gender for exp caus if include some objects.Format of objects
Object oriened basic of class!
object 1 idintfy 2state 3behavior
Global X Yerel
Why object oriented programin? Easy to create, more realistic, simplifies the software developers and maintane and pronciple of it;
Encapsulation : State in the box so paketleme
inheritance  : Dallandirma with carasteric features, for exp tekerlekli bisiklet araba so categorise
abstraction  : Hide some details when we turn on the key
polymorphism : One duty with different ways or functions

Different abstraction encapsulation? Encapsulations include lots of things together but abstraction only show collections


For example:

class Box
{													int double ets data types.
public:
int lenght;
};


if write private so you can not use out of class; public you can 

Create : Box Box1;

Differnet class and structure
Structure does not include functions but class there are



*/


//2
#include <iostream>

using namespace std;

class Box
{
	public:
		double length;
		double weight;
};

int main(){

Box Box1; // create box1 class
Box Box2;

Box1.length = 1.82;
Box1.weight = 68 ;
Box2.length = 1.72;
Box2.weight = 68;
	
	if(Box1.length>=Box2.length){
		cout<<"Fatih is taller than Mustafa"<< endl;
	}
	

	return 0;
}
