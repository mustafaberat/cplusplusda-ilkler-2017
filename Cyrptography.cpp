#include<iostream>
#include<conio.h>
#include<unistd.h>//sleep
#include<string.h>
using namespace std;
	char big_letters[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char small_letters[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char numbers[]={'0','1','2','3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','8','9'};

class Password{
	private:
		string password[];
		string new_password[];

	public:
		void giveNew(int keyNo,string password);
		void takeKeyLetter(char keyChar);
		bool controlPassword(string password);
		string getPassword();
};





bool Password::controlPassword(string password){
	int small=0 ; int big=0 ; int number=0; 
		for(unsigned i=0 ; i<password.size() ; i++){
		for(unsigned j=0; j<26 ; j++){
		if(small_letters[j]==password[i]){
			small++;
			}
		if(big_letters[j]==password[i]){
			big++;
			}
		if(numbers[j]==password[i]){
			number++;
			}
		}
	}
	if(small==0 || big==0 || number==0)			return false;
	else										return true;
}


void Password::giveNew(int keyNo,string password){
	string new_password;
	for(unsigned i=0 ; i<password.size() ; i++){
		new_password[i]=password[i];
	}
		//for small letters
	for(unsigned i=0 ; i<password.size() ; i++){
		for(unsigned j=0; j<26 ; j++){
		if(small_letters[j]==password[i]){
			new_password[i]=small_letters[j+keyNo];
			break;
			}
		}
	}
	//for BIG letters
	for(unsigned i=0 ; i<password.size() ; i++){
		for(unsigned j=0; j<26 ; j++){
		if(big_letters[j]==password[i]){
			new_password[i]=big_letters[j+keyNo];
			break;
			}
		}
	}
	
		for(unsigned i=0 ; i<password.size() ; i++){
		for(unsigned j=0; j<10 ; j++){
		if(numbers[j]==password[i]){
			new_password[i]=numbers[j+keyNo];
			break;
			}
		}
	}
	cout<<"The Real Password: "<<password<<endl;
	cout<<"The New Password: "<<new_password<<endl;
	sleep(4); //to see
}

Password P1;
void selects();
int main(){
	char decision; //to go home
	
	do{
	system("cls");
	selects(); //show the options
	decision='1';
//	cout<<"Enter the decision: ";				cin>>decision;
	switch(decision){
		case '1':
				string password;
				int keyNo;
				cout<<"Enter the real password: ";		cin>>password;
				if(P1.controlPassword(password)==false)			continue;
				cout<<"Enter the key no: ";				cin>>keyNo;
				P1.giveNew(keyNo,password);
				break;
				
		//case '2':
			

		}
	}while(decision!='8'); //exit number
	
	
	getch();
	return 0;
}




void selects(){
	cout<<"1. Giving the password and key then finding the secret password."<<endl;
	cout<<"2."<<endl;
}



