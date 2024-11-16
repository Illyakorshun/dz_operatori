#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double scale, distant;

	cout << "Kakulation vidstani" << endl;
	cout << "Enter:  " << endl;

	cout << "Map distance " << endl;
	cin >> scale;

	cout << "Vidstan miz tochkami" << endl;
	cin >> distant;

	double alldistant = scale * distant;

	cout << "Vidstan miz = " << alldistant << "km" << endl;


	return 0;
}