#include <iostream>
using namespace std;
int main() {
	char input;
	cout << "what fish would you like?" << endl;
	cin >> input;
	switch (input) {
	case'S':
		cout << "you got sushi" << endl;
		break;
	case't':
		cout << "you got tuna" << endl;
	case'j':
		cout << "you got jellyfish" << endl;
	}

}
