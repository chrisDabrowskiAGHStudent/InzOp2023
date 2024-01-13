#include <iostream>
#include "funkcje.h"
#include <random>

using namespace std;


int main() {

	cout << "Logarytm naturalny z 10:  " << ln(10) << endl << endl;
	

	cout << "Lista: ";
	double* h = new double[12];
	for (int i = 0; i < 12; i++)
	{
		h[i] = rand() % 32;
		cout << h[i] << " ";
	}
	cout << endl << endl << "Sortowana lista: ";
	h = sort(h, 12);

	for (int i = 0; i < 12; i++)
	{
		cout << h[i] << " ";
	}

	cout << endl << "Odchylenie standardowe listy: " << sd(h, 12);
	cout << endl << "Mediana listy: " << fmed(h, 12) << endl << endl;


	cout << "Eksponent 2^8 = " << ex(2, 8) << endl;


	return 0;
}
