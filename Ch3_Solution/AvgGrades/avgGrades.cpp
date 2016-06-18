#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// ask for and read the student's name
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	// ask for and read the midterm and final grades
	cout << "Please enter your midterm and final exam grades: ";
	double midterm, finalExam;
	cin >> midterm >> finalExam;

	// ask for homework grades
	cout << "Please enter your homework grades, followed by end-of-file: ";

	// the number and sum of grades read so far
	int count = 0;
	double sum = 0;

	// a variable into which to read
	double inBuf;

	// invariant: we have read "count" grades so far, and
	// sum is the sum of the first "count" grades
	while (cin >> inBuf) {
		sum += inBuf;
		count++;
	}

	// write the result
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
		<< 0.2*midterm + 0.4*finalExam + 0.4*sum / count
		<< setprecision(prec) << endl;

	return 0;
}