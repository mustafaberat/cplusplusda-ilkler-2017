#include<iostream>
#include<cmath>
#include<conio.h>

using namespace std;
class Operation{
	public:
		int number1,number2;
		int Addition();
		int Subtraction();
		int Multiplication();
		float Division(); //float
		int Mod();
		float Ust();
	
		
};

int Operation::Addition(){
	return number1+number2;	
}

int Operation::Subtraction(){
	return number1-number2;
}

int Operation::Multiplication(){
	return number1*number2;
}

float Operation::Division(){
	return number1*1.0/number2*1.0;//making float with 1.0
}

int Operation::Mod(){
	return number1%number2;
}

float Operation::Ust(){
	return pow(number1,number2);
}



int main(){
	Operation operation1;
	char finish;
	do{
		system("cls");
		
cout<<"Enter the number1 and number2 with operation:"<<endl<<"For example: [9 + 8]"<<endl<<endl;
char order;
	cin>>operation1.number1>>order>>operation1.number2; //take the numbers with order we will now calculate
	
	if(order=='+')			cout<<operation1.Addition();
	else if(order=='-')		cout<<operation1.Subtraction();
	else if(order=='*')		cout<<operation1.Multiplication();
	else if(order=='/')		cout<<operation1.Division();
	else if(order=='%')		cout<<operation1.Mod();
	else if(order=='^')		cout<<operation1.Ust();
	
	cout<<endl<<"Do you want to use it again [y/n]: ";		cin>>finish;
	
	}while(finish=='y');
	getch();
	return 0;
}
