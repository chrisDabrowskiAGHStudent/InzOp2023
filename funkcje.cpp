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
	//FIND MEDIAN
}

double* sort(double* list, int size) {

}