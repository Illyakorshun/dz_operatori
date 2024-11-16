#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double lenght, wight, height;

	cout << "calculation of the parallelogram" << endl;
	cout << "Enter" << endl;

	cout << "lenght sm : ";
	cin >> lenght;

	cout << "wight sm : ";
	cin >> wight;

	cout << "height sm : ";
	cin >> height;

	double sum = lenght * wight * height;

	cout << "All suma = " << sum << endl;


	return 0;
}