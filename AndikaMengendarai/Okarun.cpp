#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double beratApel, beratJeruk, beratSemangka;
	double hargaApel = 24000, hargaJeruk = 16250 * 2, hargaSemangka = 8000;
	double hargaTotal, diskon = 0;

	cout << "masukkan berat apel (dalam kg): ";
	cin >> beratApel;
	cout << "masukkan berat jeruk (dalam kg): ";
	cin >> beratJeruk;
	cout << "masukkan berat semangka (dalam kg): ";
	cin >> beratSemangka;

	hargaTotal = (beratApel * hargaApel) + (beratJeruk * hargaJeruk) + (beratSemangka * hargaSemangka);

	double beratTotal = beratApel + beratJeruk + beratSemangka;

	if (beratTotal > 10) {
		diskon = 0.05 * hargaTotal;
	}
	else if (beratTotal > 8) {
		diskon = 0.02 * beratTotal;
	}
	hargaTotal -= diskon;

	cout << fixed << setprecision(2);
	cout << "harga total yang harus dibayar okarun: Rp " << hargaTotal << endl;

	return 0;
}