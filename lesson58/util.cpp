#include "util.h"

void init(int class_a[], int class_b[], int class_c[], int size) {
	for (int i = 0; i < size; i++) {
		class_a[i] = rand() % (MAX_MARK - MIN_MARK + 1) + MIN_MARK;
		class_b[i] = rand() % (MAX_MARK - MIN_MARK + 1) + MIN_MARK;
		class_c[i] = rand() % (MAX_MARK - MIN_MARK + 1) + MIN_MARK;
	}
}

string convert(int marks[], int size) {
	string s = to_string(marks[0]);

	for (int i = 0; i < size; i++) {
		s += " " + to_string(marks[i]);
	}

	return s;

	void print(string text) {
		cout << text;
	}
}