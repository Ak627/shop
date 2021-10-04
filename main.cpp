#include<iostream>
using namespace std;
int main() {
	char input = 'p';

	while (input != 'q') {
		cout << "Welcome to the shop!\n";
		cout << "choose 'a' for arrows,'x' for 5 arrows, 'c' for restless cricket, 'f' for hot-footed frog, 'o' for octo balloon, or 'q' to leave shop" << endl;
		cin >> input;
		switch (input) {
		case 'a':
			cout << "here's your arrow!\n";
			break;
		case 'x':
			cout << "here are 5 arrows!" << endl;
			break;
		case 'c':
			cout << "here is a restless cricket!\n";
			break;
		case 'f':
			cout << "here is a hot-footed frog\n";
			break;
		case 'o':
			cout << "here is an octo balloon\n";
			break;
		case 'q':
			cout << "Thank you for stopping by!\n";
			break;
		default:
			cout << "not an option, dummy.\n";
		}
	}
}
