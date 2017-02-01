# include <iostream>
using namespace std;
int main() {

	char input;

	cout << "Do you like DB:Super?" << endl;
	cin >> input;
	if (input == 'y') {
		cout << "Good. You are not a troll." << endl;
	}
	else if (input == 'n') {
		cout << "YOU HAVE FAILED ME!" << endl;
	}
	 else {
		cout << "Wat?" << endl;
	}
}
