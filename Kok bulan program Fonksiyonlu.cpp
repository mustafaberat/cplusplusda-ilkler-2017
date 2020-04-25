#include<iostream>
#include<unistd.h>
#include<math.h>
#include<conio.h>

using namespace std;

void print_equation();//denklem ornegi yazdirma
void ask();
char again;
void calculate();
float a,b,c,D,x1,x2; //D is delta

int main(){
	do{
print_equation();	
calculate();
ask();
	}while(again=='y');
	
	getch();
	return 0;
}


void calculate(){
	
	D=pow(b,2)-(4*a*c);
	
	if(D>0){
		x1=(sqrt(D)-b)/(2*a);
		x2=(-b-sqrt(D))/(2*a);
	
	cout<<"\n\n";
	cout<<"x1: "<<x1<<endl<<"x2: "<<x2<<endl;
	}
	else if(D==0){
		x1=x2=((-b)/(2*a));
		cout<<"x1=x2 : "<<x1<<endl;
	}
	else if(D<0){
		cout<<"Gercel Koku Yoktur"<<endl;
	}
}

void print_equation(){
	system("cls");
	cout<<"ax2+bx+c=0"<<endl<<endl;
	cout<<"Enter a: ";			cin>>a;
	cout<<"Enter b: ";			cin>>b;
	cout<<"Enter c: ";			cin>>c;
}



void ask(){
	cout<<"\nDo you want to try again [y/n] ";
	cin>>again;
}
