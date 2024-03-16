#pragma once
#include <iostream>
#include <vector>
#include <functional>
#include "Iterator.h"
ConvertIterator::ConvertIterator(vector<int>::iterator i, function<void(int&)> l) {
	iterator = i;
	lambda = l;
}
void ConvertIterator::Convert(vector<int>::iterator lastiterator) {
	cout << "Converting values..." << endl;
	while (iterator != lastiterator) {
		int value = *iterator;
		lambda(value);
		*iterator = value;
		++iterator;
	}
}
ConvertIterator::~ConvertIterator() {
}