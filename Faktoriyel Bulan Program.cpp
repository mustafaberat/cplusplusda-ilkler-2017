/*	19.02.2018
Write a program to find factorial of a number. For Example: 5! = 120*/
#include<iostream>
#include<conio.h>
#include<unistd.h>//system cls
using namespace std;
int factorial(int);

int main(){
	int number;
	
	do{
		system("cls");
		
	cout<<"Enter the number which the computer will find the factorial: "<<endl;
	cin>>number;
	if(number<0){
		system("cls");
		cout<<"Enter the possitive digit... "<<endl;	
		sleep(3);				
	}
	}while(number<=0);
	
	factorial(number);
	// int factorialed=factorial(number) so you can keep going with fanctioned number
	
	getch();
	return 0;
}


int factorial(int number){
	int total=1;
	int old_number=number; //to write because number finally 0
	do{
		total*=number;
		number--;
	}while(number!=0);
	
	cout<<endl<<old_number<<"!"<<": "<<total<<endl;
}
