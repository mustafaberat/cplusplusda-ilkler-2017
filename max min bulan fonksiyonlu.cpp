#include<iostream>
#include<conio.h>
#define SIZE 3
using namespace std;

//finder max and min


void finderMaxMin(float[]);
void print_Max_Min(float[],float,float);

int main(){
	float numbers[SIZE];
	finderMaxMin(numbers);
	
	getch();
	return 0;
}


void finderMaxMin(float numbers[SIZE]){
	float max_number=numbers[0];
	float min_number=numbers[0]; //randim
	
	for(int i=0; i<SIZE ; i++){
		cout<<"Enter the number: ";			cin>>numbers[i]; //gotten the numbers inside
		
		if(max_number<i){
			max_number=numbers[i];
		}
		
		if(min_number>i){
			min_number=numbers[i];
		}	
	}
	
	
	print_Max_Min(numbers,max_number,min_number);
	
}


void print_Max_Min(float numbers[SIZE],float max_number,float min_number){
	cout<<"Max number is: "<<max_number<<endl;
	cout<<"Min number is: "<<min_number<<endl;
}

