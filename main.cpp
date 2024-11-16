#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double radius;

	cout << "Vvedit radius kuli = ";
	cin >> radius;

	double ar = (4.0 / 3.0) * M_PI * (radius, 3);

	cout << "Obem kuli: " << ar << endl;

	return 0;
}