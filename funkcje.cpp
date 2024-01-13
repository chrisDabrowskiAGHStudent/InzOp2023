#include <cmath>
#include <exception>
#include "funkcje.h"

using namespace std;

double ln(double num) {
	double EXT = log(num);
	return EXT;
}

double sd(double* list, int size) {
	double sum = 0.0, mean, standardD = 0.0, ret = 0.0;
	try {
		for (int i = 0; i < size; i++) {
			sum += list[i];
		}

		mean = sum / size;

		for (int i = 0; i < size; i++){
			standardD += pow(list[i] - mean, 2);
		}

		ret = sqrt(standardD);


	}
	catch (exception e) {
		throw e;
	}
	return ret;
}

long int ex(int num, int expo) {
	long int  e = pow(num, expo);
	return e;
}

double fmed(double* list, int size) {
	double* sortedList = sort(list, size);
	double med;
	if (size % 2 == 0) {
		int sizel = size/2, sizer = (size/2) + 1;
		double lhs = sortedList[sizel], rhs = sortedList[sizer];
		med = (lhs + rhs) / 2;
	}
	else med = sortedList[size / 2];
	//FIND MEDIAN
	return med;
}

double* sort(double* list, int size) {
	int i, j;
	bool swapped;
	for (i = 0; i < size - 1; i++) {
		swapped = false;
		for (j = 0; j < size - i - 1; j++) {
			if (list[j] > list[j + 1]) {
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				swapped = true;
			}
		}

		// If no two elements were swapped
		// by inner loop, then break
		if (swapped == false)
			break;
	}
	return list;
}
