
/*Question 06: Take a word from the user by using vector and
print out reverse of it, print out 'Palindromic word' if the reverse
is equal with the original one.*/

//2 boyutlu vektor tanim: vector<vector<<int>> V2; 
#include<iostream>
#include<conio.h>
#include<vector>//bir class 

using namespace std;
int main(){

char c;
vector<char> text;
vector<char> reverse_text;

cout<<"Enter the sentence: ";

do{ //taken the text
	c=getchar(); //karakter karakter alir
	text.push_back(c); //onu da ekler
}while(c!='\n'); //pop back lazim ki \n gitsin

text.pop_back(); text.pop_back(); //bir tane gitti sondan \n ve NULL


cout<<"Reverse: "<<endl;
int m=0; //en sonu tersin ilkene at

for(int i=text.size() ; i>=0; i--){ //ekrana tersi yazdirma
	reverse_text.push_back(text[i]);
	cout<<reverse_text[m];
	m++;
}//push back en sona karakter ekler

bool equal = true;
for(int i=text.size() ; i>=0; i--){
	if(reverse_text[i]!=text[i]);     equal=false;

}

if(equal==true)		cout<<"Palindromix..."<<endl; //tersi esit demek

	getch();
	return 0;
}
