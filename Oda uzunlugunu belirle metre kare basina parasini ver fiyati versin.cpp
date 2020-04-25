/*15.02.2018
3) Write a program to calculate the cost of carpeting a rectangular room
in a house. The program must
• request the length and breadth of the room (Assume they are in
meters)
• request the cost per square meter of the carpet
• calculate the area of the room
• calculate the cost of the carpet for the room
• print the area and the cost*/

#include<iostream>
#include<conio.h>//getch
#include <unistd.h>//sleep
#include<math.h>

using namespace std;

class Carpet{
	public:
		float length;
		float breadth;
		float cost;
		float get_area();
		float get_cost();
};

float Carpet::get_area(){ //area taker
	return length*breadth;
}
float Carpet::get_cost(){
	return length*breadth*cost;
}

int main(){
	Carpet Carpet1;
	cout<<"Enter the lenght of the room: ";				cin>>Carpet1.length;
	cout<<"Enter the breadth of the room: ";			cin>>Carpet1.breadth;
	cout<<"Enter the cost per square meter of the carpet: ";	cin>>Carpet1.cost;
	
	cout<<"\n\n";
	
	cout<<"Area of room: "<<Carpet1.get_area()<<endl;
	cout<<"Processing the cost...\n";
	sleep(2);
	cout<<"Normally cost for this room: "<<Carpet1.get_cost()<<endl;
	cout<<"But only for you: "<<Carpet1.get_cost()-((Carpet1.get_cost())*0.2); //discount
	
	getch();
	return 0;
}
