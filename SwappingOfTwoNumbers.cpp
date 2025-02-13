#include <iostream>
using namespace std;
int main(){

	int num1 = 5,num2 = 10;
		
	cout<<"----- Swapping to Numbers -----\n";

	cout<<"\nBefore Swapping\n";
	cout<<"Num 1 : " <<num1 <<endl;
	cout<<"Num 2 : " <<num2 <<endl;

	num1 = num2 + num1; //10 + 5 = 15
	num2 = num1 - num2; //15 - 10 = 5
	num1 = num1 - num2; //15 - 5 = 10
		
	cout<<"\nAfter Swapping\n";
	cout<<"Num 1 : "<<num1 <<endl;
	cout<<"Num 2 : "<<num2;

	return 0;
}
