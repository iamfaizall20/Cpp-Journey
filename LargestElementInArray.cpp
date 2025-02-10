#include <iostream>
using namespace std;
int main(){
	
	int arr[5] = {11,22,33,44,55};
	int largest = 0;
	
		cout<<"Array: ";
		for(int i=0;i<5;i++){
			cout<<arr[i] <<ends;
			if(arr[i] >= largest){
				largest = arr[i];
			}
		}
		cout<<"\nLargest Element: " <<largest;
		
	return 0;
}
