#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int all;

	cout << "Vvedit chas v sec";
	cin >> all;

	int hours = all / 3600;
	int min = (all % 3600) / 60;
	int sec = all % 60;

	cout << hours << " : " << min << " : " << sec << endl;

	int day = 24 * 3600;
	int mid = day - all;

	hours = mid / 3600;
	min = (mid % 3600) / 60;
	sec = mid % 60;

	cout << hours << " : " << min << " : " << sec << endl;

	return 0;
}