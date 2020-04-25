//13.03.2018			21.34			Pointer 2.ornek
#include<iostream>
#include<conio.h>
using namespace std;
void result();
void Swap_numbers(int *n1, int *n2);

int main(){
	result();
	getch ();
	return 0;
}




void result(){
	int number1,number2;
	
	cout<<"Enter the numbers: ";			cin>>number1>>number2; //taken number
	
	cout<<"The normal order of numbers: "<<number1<<"\t"<<number2<<endl;
	Swap_numbers(&number1,&number2);		//swap fonksion featching
	cout<<"The swap of numbers: "<<number1<<"\t"<<number2<<endl;

}



void Swap_numbers(int *n1, int *n2){
	int spare=*n2;
	*n2=*n1;
	*n1=spare;
}
