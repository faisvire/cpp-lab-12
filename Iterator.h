#pragma once
#include <vector>
#include <functional>
using namespace std;
class ConvertIterator {
public:
	vector<int>::iterator iterator;
	function<void(int&, int)> lambda;
	ConvertIterator(vector<int>::iterator i, function<void(int&, int)> lambda);
	void Convert(vector<int>::iterator lastiterator, int object);
	~ConvertIterator();
};