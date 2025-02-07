#include <iostream>
using namespace std;

	void EvenOddChecker(int num){
		if(num%2==0){
			cout<<num <<" is Even.\n";
		}
		else{
			cout<<num <<" is Odd.\n";
		}
	}

int main(){
	
	int num;
	
	cout<<"----- Even & Odd Checker -----\n";
	
	cout<<"\nEnter Number: ";
	cin>>num;
	
	EvenOddChecker(num);
}
