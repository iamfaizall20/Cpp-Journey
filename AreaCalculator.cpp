#include <iostream>
using namespace std;

	void CalculateArea(int length,int width){
		int area = length*width;
		
		cout<<"Area : " <<area;
	}
int main(){
	
	int length,width;
	
	cout<<"----- Area Calculator -----\n";
	
	cout<<"Enter Length: ";
	cin>>length;
	cout<<"Enter Width: ";
	cin>>width;
	
	CalculateArea(length,width);
	
}
