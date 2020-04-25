#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	vector<float> v5;
	float b=0;
	
	while(b!=-1){
		cout<<"Enter the number (Exit -1)  :";					cin>>b;
		
		v5.push_back(b); //note -1 i de push back yaptik
	}
	
	v5.pop_back();//-1 gitti sonu sildi
	
	
	float total=0,c; 
	while(!v5.empty()){
		c=v5.back(); //en son elemani aldik
		total+=c;
		v5.pop_back();//aksi halde en sondakini toplar hep
	}
	
	
	
	cout<<"Total: " <<total<<endl;
 	
	return 0;
}










/*	vector<int> v3(10,3);
	
	for(int i=0; i<10 ; i++){
		
		cout<<v3[i]<<" ";
		
	}
	*/
