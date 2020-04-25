#include<iostream>
#include<vector>

using namespace std;

void fillVector(vector<int>&);
//@param vector<int>& - the vector to be filled

void printVector(const vector<int>&);
//@param const vector<int>& - the vector to be printed

void reverse(const vector<int>&);
//@param const vector<int>& - the vector to be printed backwards

void printEvens(const vector<int>&);
//@param const vector<int>& - only prints even numbers 

void replace(vector<int>&);
//@param vector in question


int main(){

	vector<int> myVector;
	fillVector(myVector);
	printVector(myVector);
	reverse(myVector);
	printEvens(myVector);
	replace(myVector);
	
	return 0;
}


void printVector(const vector<int>& newMyVector){
	for(unsigned i=0 ; i<newMyVector.size() ; i++){
		cout<<newMyVector[i]<<" "; 
	}
	cout<<endl;
}




void reverse(const vector<int>& newMyVector){
	cout<<"Vector Reverse: ";
	
	
	for(unsigned i=newMyVector.size(); i>0 ; i--){
		cout<<newMyVector[i-1]<<" ";
	}
	cout<<endl;
}




void fillVector(vector<int>& newMyVector){
	cout<<"Type in a list of number (Exit -1): ";
	int input;
	cin>>input;
	
	while(input!=-1){
		newMyVector.push_back(input);
		cin>>input;
	}
		cout<<endl;
}



void replace(vector<int>& newMyVector){
	int old,replace;
	
	cout<<endl<<"Type in a number to be replace with another number: ";
	cin >> old >> replace;
	
	for(unsigned i=0 ; i<newMyVector.size() ; i++){
		if(newMyVector[i] == old){
			newMyVector[i] = replace;
		}
	}
	
	printVector(newMyVector);
	cout << endl;
}



void printEvens(const vector<int>& newMyVector){
	cout<<"Even Numbers: "<<endl;
	for(unsigned i=0 ; i<newMyVector.size() ; i++){
		if((newMyVector[i]%2)==0){ //even 
			cout<<newMyVector[i]<<" ";
		}
	}
	cout<<endl;
}
