//4
/*: Produce a random integer between 1 and 100 and
provides the user with seven guesses. If the user guesses
correctly it should produce a message on screen saying that
“You won”. After each incorrect guess it should tell the user
that they were wrong and whether or not they were too high or
too low. After 7 tries they still haven't got the number correctly
it should say "You lose".*/

#include<iostream>
#include<time.h>//timenull srand
#include<cstdlib>//rand
#include<conio.h>

using namespace std;

int main(){
int counter=0; //wrong count
int guess;
srand(time(NULL)); //rastgele aticak
int true_number=rand()%100+1;
do{
	cout<<"Enter the number: ";			cin>>guess;
	
	if(guess>true_number){
		cout<<"Your number is bigger than true number"<<endl;
		counter++;
	}
	
	else if(guess<true_number){
		cout<<"Your number is smaller than true number"<<endl;
		counter++;
	}
	
	else if(guess==true_number){
		cout<<"Great!"<<endl;
		cout<<"You tried "<<counter<<" times "<<endl;
	}
	
	
	if(counter>=7){
		char decision;
		cout<<"You can not try anymore.Game is over."<<endl;
		cout<<"If you want to game again press [y] ";		cin>>decision;
		
		if(decision=='y'){
		counter=0;//sayaci 0 la ki bastan baslayasin
		system("cls");
		continue;
		}
		
		else if(decision!='y'){
			break;
		}
		
	}
	
	
}while(guess!=true_number);

getch();
return 0;
}



