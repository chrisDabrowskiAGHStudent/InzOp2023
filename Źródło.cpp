#include <iostream>

using namespace std;


void km2mile(double km);
void add10nums();

int main() {

	add10nums();

	double km;
	cin >> km;

	km2mile(km);

	return 0;
}

void add10nums() {
	//ZAD2
	cout << "Hello! Podaj 10 liczb!" << endl;
	static int AA[10];

	for (int i = 0; i < 10; i++) {
		cin >> AA[i];
	}
	cout << endl;
	int b = 0;
	for (int i = 0; i < 10; i++) {
		if (AA[i] > 0) {
			b++;
		}
	}
	int* BB = new int[b];
	b = 0;
	for (int i = 0; i < 10; i++) {
		if (AA[i] > 0) {
			BB[b] = AA[i];
			b++;
		}
	}
	cout << "Liczby nieujemne" << endl;
	for (int i = 0; i < b; i++) {
		cout << BB[i] << endl;
	}
	cout << "ilosc liczb nieujemnych: " << b << endl << "ilosc liczb ujemnych: " << 10 - b << endl;
}

void km2mile(double km) {
	const double mileconst = 0.621371;
	const double nmileconst = 1.15078;

	double mile = km * mileconst;
	double nmile = mile * nmileconst;


	cout << "Kilometres: " << km << "   Miles: " << mile << "   Nautical miles: " << nmile << endl;

}