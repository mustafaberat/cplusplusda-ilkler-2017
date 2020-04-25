/* 15.02.2018
4) Write a program to calculate electricity charges for a customer. The
program requests
o name,
o previous meter reading and current meter reading.
The difference in two reading gives the number of units of electricity
used. The customer pays a fixed charge of $25 plus 2$ for each unit
used.*/

#include<iostream>
#include<conio.h>
#include<string>
#include<math.h>

using namespace std;

class Electric{
	public:
	float cost;
	float previous_meter;
	float current_meter;
	char name[];
};

int main(){
	Electric electric1;
	cout<<"Enter the name: ";		cin>>electric1.name;
	cout<<"Enter the previous meter: ";		cin>>electric1.previous_meter;
	cout<<"Enter the currenct meter: ";		cin>>electric1.current_meter;
	
	electric1.cost=fabs((electric1.previous_meter-electric1.current_meter)*2)+25;
	
	cout<<"\n"<<electric1.name<<"\nYour Total Cost: "<<electric1.cost<<" Dolar\n";
	getch();
	return 0;
}

