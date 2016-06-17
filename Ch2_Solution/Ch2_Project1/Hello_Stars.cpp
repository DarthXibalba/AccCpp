#include <iostream>
#include <string>

using namespace std;

int main()
{
	// ask for the person's name
	cout << "Please enter your first name: ";

	// read the name
	string name;
	cin >> name;

	// build the message that we intended to write
	const string greeting = "Hello, " + name + "!";

	// the number of blanks surrounding the greeting
	const int pads = 1;

	// the number of rows and cols to write
	const int rows = pads * 2 + 3;
	const string::size_type cols = greeting.size() + pads * 2 + 2;

	// write a blank line to separate the output from the input
	cout << endl;

	// write "rows" number of rows of output
	// invariant: we have written r rows so far
	for (int r = 0; r != rows; r++) {
		string::size_type c = 0;

		// We have written c characters so far in the current row
		while (c != cols) {

			// Write the greeting
			if (r == pads + 1 && c == pads + 1) {
				cout << greeting;
				c += greeting.size();
			}
			//  Write the border
			else if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
				cout << "*";
				c++;
			}
			else {
				cout << " ";
				c++;
			}
		}
		cout << endl;
	}
	return 0;
}