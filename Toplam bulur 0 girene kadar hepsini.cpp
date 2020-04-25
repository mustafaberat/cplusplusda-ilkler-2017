/* 19.02.2018
Write a program to add numbers entered by user until user enters 0.*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int total=0;
	int entered;
	
	cout<<"Enter the number to find sum of numbers[Exit 0]"<<endl;
	do{	
	cin>>entered;
	total+=entered;
	}while(entered!=0);
	
	
	cout<<"____+"<<endl<<"Total Number: "<<total<<endl;
	
	getch();
	return 0;
}
