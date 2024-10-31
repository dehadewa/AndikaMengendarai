#include <iostream>
using namespace std;

void hitungEk(double massa, double kecepatan) {
	double energiKinetik = 0.5 * massa * kecepatan * kecepatan;
	cout << "energiKinetik: " << energiKinetik << "Joule" << endl;
}

int main() {
	double massaSepeda, massaAndika, massaTotal, kecepatan;

	cout << "masukkan massa sepeda (gram): ";
	cin >> massaSepeda;
	cout << "masukkan massa andika (gram): ";
	cin >> massaAndika;
	cout << "masukkan kecepatan (m/s): ";
	cin >> kecepatan;

	double massaTotal = massaSepeda + massaAndika;
	hitungEk(massaTotal = massaSepeda, kecepatan);

	return 0;
}