#include <iostream>
#include <string> //string library to use string data type
using namespace std;

int main() {
	
	string beforeReverse = "hello"; // Original string
	string afterReverse = beforeReverse; // Initialize a new string with the same content

	// Loop to reverse the string
	for (int i = 0; i < beforeReverse.length(); i++) {
		
		afterReverse[i] = beforeReverse[beforeReverse.length() - (i + 1)];
	}

	cout << afterReverse;

	return 0;
}

