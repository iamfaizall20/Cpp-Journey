#include <iostream>
using namespace std;

	void multiplicationTable(int num){
		
		cout<<"\nTable of " <<num <<endl;
		cout<<endl;
		for(int i=1;i<=10;i++){
			cout<<num <<" x " <<i <<" = " <<num*i <<endl;
		}
	}

int main(){
	
	int num;
	
	cout<<"Enter Number: ";
	cin>>num;
	
	multiplicationTable(num);
}
