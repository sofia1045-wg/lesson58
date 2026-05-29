#include "logic.h"

int main() {

	int classes[DEFAULT_SIZE][DEFAULT_SIZE];

	int n = 3;
	int m = 5;

	init(classes, n, m);

	print("Class A: " + convert(classes, n, m) + ".\n");

	print("Average mark from all classes " 
		+ to_string(calculate_avg_mark(class_a, size)) + ".\n");

	print("Average mark from class B is "
		+ to_string(calculate_avg_mark(class_b, size)) + ".\n");

	print("Average mark from class C is "
		+ to_string(calculate_avg_mark(class_c, size)) + ".\n");

	return 0;
}