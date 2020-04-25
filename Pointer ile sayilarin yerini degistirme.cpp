#include<iostream>

using namespace std;

void p_swap(int *, int *);
void r_swap(int &, int &);
int main(){
	
	int v=5, y=40 ;
	cout<<v<<y<<endl;  //540
	p_swap(&v, &y);
	cout<<v<<y<<endl;	//405
	r_swap(v,y);		//540
	cout<<v<<y<<endl;		
	
	
	return 0;
}


void p_swap(int *a, int *b){
	int spare;
	spare=*a;
	*a=*b;
	*b=spare;
}


void r_swap(int &a, int &b){
	int spare;
	spare=a;
	a=b;
	b=spare;
}
