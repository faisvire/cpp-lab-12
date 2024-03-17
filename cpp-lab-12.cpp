#include <iostream>
#include <vector>
#include "Iterator.h"
using namespace std;
int main() {
	int n;
	cout << "Enter number of digits: ";
	cin >> n;
	cout << "Enter " << n <<" digits: ";
	vector<int> digits = {};
	for (int i = 0; i < n; ++i) {
		int value;
		cin >> value;
		digits.push_back(value);
	}
	cout << endl;
	cout << "Initial vector: ";
	for (auto i = digits.begin(); i != digits.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl << endl;
	int object;
	cout << "Enter number to sum with digits: ";
	cin >> object;
	cout << endl;
	ConvertIterator It(digits.begin());
	It.Convert(digits.end(), object);
	cout << endl;
	cout << "Current vector: ";
	for (auto i = digits.begin(); i != digits.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl << endl;
}
