#include <iostream>
using namespace std;
int main () {

	int Goku = 0;
	int Vegeta = 0;
	int Chichi = 0;
	int Bulma = 0;
	int Krillin = 0;
	char input;
	cout << "Lets find out what DBZ charecter you are!" << endl; 
	<< endl; 
	<< endl;
	
	//First question
	cout << "What is your favorite color?"
		(B for black, G for green, P for pink, BL for blue, R for red)
		cin >> input;
	if (input == 'B')
		Goku = Goku + 1;
	else if (input == 'P')
		Chichi = Chichi + 1;
	else if (input == 'G')
		Krillin = Krillin + 1;
	else if (input == 'BL')
		Bulma = Bulma + 1;
	else if (input == 'R')
		Vegeta = Vegeta + 1;
	cout << "invalid input" << endl;

//Second question 
	cout << "what race are you?"
		(A for saiyan, B for human)
		cin >> input;
	if (input == 'A')
		Goku = Goku = +2
		Vegeta = Vegeta + 2
	else if (input == 'B')
		Chichi = Chichi + 3
		Bulma = Bulma + 3
		Krillin = Krillin + 3
		cout << "invalid input" << endl;
		
	//Third question
	cout << "What gender are you?"
		cin >> input;
	(F for female, M for male)
		if (input == 'F')
			Chichi = Chichi + 2
			Bulma = Bulma + 2
		else if (input == 'M')
			Goku = Goku + 3
			Vegeta = Vegeta + 3
			Krillin = Krillin + 3
			cout << "invalid input" << endl;

	//Forth question
	cout << "Do you eat alot?"
		(A for yes, B for no)
		cin >> input;
	if (input == 'A')
		Goku = Goku + 4
	else if (input == 'B')
		Vegeta = Vegeta + 2
		Chichi = Chichi + 2
		Bulma = Bulma + 2
		Krillin = Krillin + 2
		cout << "invalid input" << endl;
	
	//fifth question 
	cout"can you fly?"
		(A for yes B for no)
		cin >> input;
	if (input == 'A')
		Goku = Goku + 2
		Vegeta = Vegeta + 2
		Krillin = Krillin + 2
	else if (input == 'B')
		Chichi = Chichi + 3
		Bulma = Bulma + 3
		cout << "invalid input" << endl;

	//sixth question
	cout << "are you tall?"
		(A for yes N for no)
		cin >> input;
	if (input == 'A')
		Goku = Goku + 3
		Vegeta = Vegeta + 3
	else if (input == 'B')
		Chichi = Chichi + 1
		Bulma = Bulma + 1
		Krillin = Krillin + 1
		cout << "invalid input" >> endl;

	//seventh question