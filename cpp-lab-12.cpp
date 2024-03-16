#include <iostream>
#include <vector>
#include "Iterator.h"
using namespace std;
int main() {
	vector<int> digits = { 1, 2, 3, 4, 5 };
	cout << "Initial vector: ";
	for (auto i = digits.begin(); i != digits.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl << endl;
	ConvertIterator It(digits.begin(), [](int& value) {value += 50; });
	It.Convert(digits.end());
	cout << endl;
	cout << "Current vector: ";
	for (auto i = digits.begin(); i != digits.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl << endl;
}
