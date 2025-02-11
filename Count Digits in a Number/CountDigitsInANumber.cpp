#include <iostream>
using namespace std;

	void countDigits(int num){
		int count = 0;
		
		while(num>0){
			num/=10;
			count++;
		}
		cout<<"\nNo. of Digits: " <<count;
	}


int main(){
	int num,count;
	
	cout<<"Enter number: ";
	cin>>num;
	
	cout<<"\nNumber: " <<num;
	
	countDigits(num);
	
	return 0;
}
