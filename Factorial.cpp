#include <iostream>
using namespace std;
int main(){
	int factorial = 1,
	N;
	
	cout<<"Enter Number: ";
	cin>>N;
	
	for(int i=1;i<=N;i++){
		factorial*=i;
	}
	cout<<"Factorial: "<<factorial;
}
