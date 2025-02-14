#include <iostream>
#include <string>
using namespace std;

	void PalindromeChecker(string str){
		string newstr = str;
		
		for(int i=0;i<str.length();i++){
			newstr[i] = str[str.length() - (i+1)];
		}
		
		if(str==newstr){
			cout<<"It's Palindrome\n";
		}else{
			cout<<"It's not Palindrome\n";
		}
	}

int main(){
	string str,newstr;
	
	cout<<"----- Palindrome Checker -----\n";
	cout<<"\nEnter String: ";
	getline(cin,str);
	
	PalindromeChecker(str);
}
