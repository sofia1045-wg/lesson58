#include "logic.h"

int main() {
	int class_a[DEFAULT_SIZE];
	int class_b[DEFAULT_SIZE];
	int class_c[DEFAULT_SIZE];

	int size = 10;

	init(class_a, class_b, class_c, size);

	print("Class A: " + convert(class_a, size) + ".\n");
	print("Class B: " + convert(class_b, size) + ".\n");
	print("Class C: " + convert(class_c, size) + ".\n");

	print("Average mark from class A is " 
		+ to_string(calculate_avg_mark(class_a, size)) + ".\n");

	print("Average mark from class B is "
		+ to_string(calculate_avg_mark(class_b, size)) + ".\n");

	print("Average mark from class C is "
		+ to_string(calculate_avg_mark(class_c, size)) + ".\n");

	return 0;
}