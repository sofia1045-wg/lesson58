#include "logic.h"

string calculate_avg_mark(int classes[][DEFAULT_SIZE], int n, int m) {

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