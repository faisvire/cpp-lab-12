#pragma once
#include <iostream>
#include <vector>
#include <functional>
#include "Iterator.h"
ConvertIterator::ConvertIterator(vector<int>::iterator i) {
	iterator = i;
}
void ConvertIterator::Convert(vector<int>::iterator lastiterator, int object) {
	cout << "Converting values..." << endl;
	while (iterator != lastiterator) {
		int value = *iterator;
		FunctionalObject funcobj;
		funcobj(value, object);
		*iterator = value;
		++iterator;
	}
}
void FunctionalObject::operator()(int& value, int object) {
	value += object;
}
ConvertIterator::~ConvertIterator() {
}