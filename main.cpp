#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int grn, kop;
	cout << "Enter sum in grn";
	cin >> grn;
	cout << "Enter sum in kop";
	cin >> kop;

	grn += kop / 100;
	kop = kop % 100;

	cout << "Suma: " << grn << " grn " << kop << "kop" << endl;

	return 0;
}