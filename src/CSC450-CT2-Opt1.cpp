//============================================================================
// Name        : CSC450-CT2-Opt1.cpp
// Author      : Chris Letizio
// Version     :
// Copyright   : Your copyright notice
// Description : Program that will take user String inputs, concatenate them, and
//               output them to the console.
//============================================================================

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	vector<string> userInputs;
	vector<string> concatenatedInputs;

	for (int i = 0; i <3; i++){
		string userInput1, userInput2;

		// Get user inputs
		cout << "Enter the first string: ";
		getline (cin, userInput1);

		cout << "Enter the second string: ";
		getline (cin, userInput2);

		// Concatenate the strings
		string combinedStrings = userInput1 + userInput2;

		// Create vectors
		userInputs.push_back("Input 1: " + userInput1 + "Input 2: "+ userInput2);
		concatenatedInputs.push_back("Concatenated result: " + combinedStrings + "/n");

	}

	// Print the inputs and results


}
