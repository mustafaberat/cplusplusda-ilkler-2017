/*15.02.2018
1) Write a program that will ask about the value of First and second
number and do the arithmetic operators. You output will be looks
like as follows:	Enter First Number: 10 Enter Second Number: 5
Addition is: 15 Subtraction is: 5 Multiplication is: 50 Division is: 2 Modulus is: 0

*/

#include<iostream>
#include<unistd.h> // has sleep
#include<math.h>
#include<conio.h> //has getch(

using namespace std;

class Numbers{
	public: //for use on another place if private, would not use like global only in the class
	int first_number=0;
	int second_number=0;
	float get_mod();
	float get_sum();
	float get_subtraction();
	float get_multiplication();
	float get_division();
};//Normally we can write inside but it is more useable

float Numbers::get_sum(){
	return first_number+second_number;
}

float Numbers::get_subtraction(){
	return fabs(first_number-second_number);
}

float Numbers::get_multiplication(){
	return first_number*second_number;
}

float Numbers::get_division(){
	return first_number/second_number;
}

float Numbers::get_mod(){
	return (first_number%second_number);
}



int main(){
	Numbers Number1;
cout<<"Enter the first number: "<<endl;
cin>>Number1.first_number;
cout<<"Enter the second number: "<<endl;//or \n
cin>>Number1.second_number;
cout<<"\n\n\n\n";
cout<<Number1.first_number<<" + "<< Number1.second_number<<" = "<<Number1.get_sum()<<endl;
cout<<Number1.first_number<<" - "<< Number1.second_number<<" = "<<Number1.get_subtraction()<<endl;	
cout<<Number1.first_number<<" * "<< Number1.second_number<<" = "<<Number1.get_multiplication()<<endl;	
cout<<Number1.first_number<<" / "<< Number1.second_number<<" = "<<Number1.get_division()<<endl;
cout<<Number1.first_number<<" % "<< Number1.second_number<<" = "<<Number1.get_mod()<<endl;
	getch();
	return 0;
}


