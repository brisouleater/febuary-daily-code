#include <iostream>
using namespace std;
int main() {

	int input;

	cout << "how many cookies do you want?" << endl;
	cin >> input;
	if (input < 5)
		cout << "are you sure?" << endl;
	else if (input == 5 - 10)
		cout << "Here are your cookies" << endl;
	else if (input > 10)
		cout << "You are a fata**." << endl;

}