#include "logic.h"

double calculate_avg_mark(int class_a[], int class_b[], int class_c[], int size) {

	if (size <= 0) {
		return "Error.";
	}

	double sum = 0;

	for (int i = 0; i < size; i++) {
		sum += class_a[i];
	}

	string result = to_string(sum / size);

	result = to_string(sum / size);

	return result;
}