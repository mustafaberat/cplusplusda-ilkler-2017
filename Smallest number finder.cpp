#include<iostream>
#include<conio.h>
#include<unistd.h>
using namespace std;

float take_numbers(int);

int main(){
	int number;
	int spare;
	int smallest;
	
	int numbers_number;
	cout<<"How many numbers you will enter: ";   cin>>numbers_number;	

cout<<"Enter the number: ";
cin>>number;


for(int i=1;i<numbers_number;i++){
	cin>>smallest;
	
	if(smallest>number || smallest>spare){
		spare=smallest;
		smallest=number;
	}
	
}



cout<<endl<<"Smallest: "<<smallest;
	
	
	getch();
	return 0;
}
