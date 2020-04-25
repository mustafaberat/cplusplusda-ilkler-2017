#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;

void find_month(int);
void find_month(string);

int main(){
	cout<<"Enter the decision: "<<endl<<endl;
	cout<<"1-Enter the number to see mounth name"<<endl;
	cout<<"2-Enter the mounth name by number"<<endl;
	cout<<"Decision: ";
	int decision;
	cin>>decision;
	
	switch(decision){
		case 1:
			system("cls");
			int month;
			cout<<"Enter the number to see mounth name: ";
			cin>>month;
			find_month(month);
			break;
			
		case 2:
			system("cls");
			string Smonth;
			cout<<"Enter the month name: ";
			cin>>Smonth;
			find_month(Smonth);
			break;	
	}
	
	getch();
	return 0;
}

void find_month(string Smonth){
	
	if(Smonth=="January" || Smonth=="january")
	{
		cout << "1 - January";
	}
	else if(Smonth=="February" || Smonth=="february")
	{
		cout << "2 - February";
	}
	else if(Smonth=="March" || Smonth=="march")
	{
		cout << "3 - March";
	}
	else if(Smonth=="April" || Smonth=="april")
	{
		cout << "4 - April";
	}
	else if(Smonth=="May" || Smonth=="may")
	{
		cout << "5 - May";
	}
	else if(Smonth=="June" || Smonth=="june")
	{
		cout << "6 - June";
	}
	else if(Smonth=="July" || Smonth=="july")
	{
		cout << "7 - July";
	}
	else if(Smonth=="August" || Smonth=="august")
	{
		cout << "8 - August";
	}
	else if(Smonth=="September" || Smonth=="september")
	{
		cout << "9 - September";
	}
	else if(Smonth=="October" || Smonth=="october")
	{
		cout << "10 - October";
	}
	else if(Smonth=="November" || Smonth=="november")
	{
		cout << "11 - November";
	}
	else if(Smonth=="December" || Smonth=="december")
	{
		cout << "12 - December";
	}
	else{
		cout<< "Not valiable!";
	}
	
	
	
}

void find_month(int month){
	switch (month){
		case 1:
			cout << "January - Ocak";
			break;
		case 2:
			cout << "February - Subat";
			break;
		case 3:
			cout << "March - Mart";
			break;
		case 4:
			cout << "April - Nisan";
			break;
		case 5:
			cout << "May - Mayis";
			break;
		case 6:
			cout << "June - Haziran";
			break;
		case 7:
			cout << "July - Temmuz";
			break;
		case 8:
			cout << "August - Agustos";
			break;
		case 9:
			cout << "September - Eylul";
			break;
		case 10:
			cout << "October - Ekim";
			break;
		case 11:
			cout << "November - Kasim";
			break;
		case 12:
			cout << "December - Aralik";
			break;
		default:
			cout << "Error! You must enter a number between 1 and 12"<<endl;
	}
}

