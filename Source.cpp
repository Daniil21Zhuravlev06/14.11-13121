//Даниил Журавлёв
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	/*Напечатать все двухзначные числа, которые делятся на 5.  Без остатка. */
	for (int i = 1; i < 100; i++) {
		if (i % 5 == 0) {
			cout << i;
		}
	}
	return 0;
}