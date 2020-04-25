#include<iostream>
#include<conio.h>

using namespace std;
int find_factorial(int);
void take_number();

int main(){
	take_number();
	}

void take_number(){
	int number;
	cout<<"Enter the number: ";	cin>>number;
	cout<<"Factorial of the number: "<<find_factorial(number)<<endl;
}


int find_factorial(int number){
	if(number==1){
		return 1;
	}
	else{
		return number*find_factorial(number-1);
	}
}
