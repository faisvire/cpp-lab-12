#pragma once
#include <vector>
#include <functional>
using namespace std;
class ConvertIterator {
public:
	vector<int>::iterator iterator;
	function<void(int&)> lambda;
	ConvertIterator(vector<int>::iterator i, std::function<void(int&)> lambda);
	void Convert(vector<int>::iterator lastiterator);
	~ConvertIterator();
};