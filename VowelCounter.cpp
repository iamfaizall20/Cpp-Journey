#include <iostream>
#include <string>  // Include the string library for string operations
using namespace std;

// Function to count vowels in a given string
void vowelCounter(string str) {
    int NumberOfVowels = 0;  

    // Loop through each character in the string
    for (int i = 0; i < str.length(); i++) {
        // Check if the current character is a vowel (both uppercase and lowercase)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            NumberOfVowels++;  
        }
    }

    // Display the total number of vowels in the input string
    cout << "Number of vowels in the string: " << NumberOfVowels << endl;
}

int main() {
    string str;

    // Prompt user to enter a string
    cout << "Enter a string: ";
    getline(cin, str);  

    // Call the function to count vowels
    vowelCounter(str);

    return 0;  
}

