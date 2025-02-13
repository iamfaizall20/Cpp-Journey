#include <iostream>
using namespace std;
int main(){
	double length,width,perimeter;
	
	cout<<"----- Perimeter of Rectangle -----\n";

	cout<<"Enter Length: ";
	cin>>length;
	
	cout<<"Enter Width: ";
	cin>>width;
	
	perimeter = ( length + width ) * 2; //formula of finding perimeter of Rectangle
	
	cout<<"Perimeter: " <<perimeter;
	
	return 0;

}
