/*Write program to add two integers. Make a
function add() to add integers and display sum in main()
function.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int take_number();
int addition_numbers(int,int);

int main(){
	int result=take_number();
	cout<<"Total of these two numbers: "<<result<<endl;
}

int take_number(){
	int number1=0;
	int number2=0;
	cout<<"Enter two numbers: ";			cin>>number1>>number2;
	return addition_numbers(number1,number2);
}

int addition_numbers(int number1,int number2){
	return number1+number2;
}
