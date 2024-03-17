#pragma once
#include <vector>
#include <functional>
using namespace std;
class ConvertIterator {
public:
	vector<int>::iterator iterator;
	ConvertIterator(vector<int>::iterator i);
	void Convert(vector<int>::iterator lastiterator, int object);
	~ConvertIterator();
};
struct FunctionalObject {
	void operator()(int& value, int object) {
		value += object;
	}
};