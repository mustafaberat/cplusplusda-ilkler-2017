/*	19.02.2018
The sum of the squares of the first ten natural numbers is,
1*1 + 2*2 + ... + 10*10*10*10*** = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 ? 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include<iostream>
#include<conio.h>
#include<math.h>//pow sqrt

using namespace std;
int main(){
	
	int total_numbers=0;
	int total_squares=0;
	int one_to_number=0;
	
	for(int i=1;i<=10;i++){
		total_squares+=pow(i,2);
	}
	
	for(int j=1;j<=10;j++){
		one_to_number+=j;
	}
	
	cout<<"1 square + 2 sq.: "<<total_squares<<endl;
	cout<<"(1+2+3..+10)2: "<<pow(one_to_number,2)<<endl; 
	
	getch();
	return 0;
}
