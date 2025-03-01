#include <iostream>
using namespace std;
int main(){
	int N = 5,
	sum = 0;
	
	for(int i=1;i<=N;i++){
		if(i%2==0){
			sum+=i;
		}
	}
	cout<<"Sum: "<<sum;
}
