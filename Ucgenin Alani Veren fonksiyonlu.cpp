#include<iostream>    //18.2.2018
#include<conio.h>
#include<math.h>//sqrt pow floor like that
using namespace std;
double calculate_area(double,double,double,long double); //function

int main(){
	long double Area=0;
	double a,b,c;
	cout<<"Enter the size of triangle: ";			cin>>a>>b>>c;
	cout<<endl<<endl;
	
	cout<<"Area: "<<calculate_area(a,b,c,Area)<<endl;
	
	getch();
	return 0;
}


double calculate_area(double a,double b,double c,long double Area){
	long double p=((a+b+c)/2); //half periphery
	Area=sqrt(p*(p-a)*(p-b)*(p-c));
	return Area;
}
