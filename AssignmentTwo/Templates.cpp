#include "Templates.h"
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm> 

using namespace std;


template <> const char * add<const char *>(const char *x, const char *y) {
	cout << "ERROR const char * passed" << endl;
	
	return x;
}


template <> vector<int> add<vector<int>>(vector <int> x, vector <int> y) { //returns a vector with all elements from passed vector
	vector <int> returnValue;

	returnValue.insert(returnValue.end(), x.begin(), x.end());
	returnValue.insert(returnValue.end(), y.begin(), y.end());
	
	return returnValue;
}

template <> vector<int> ArraySumOne<std::vector<int>>(std::vector <int> *x, int size) { //pass array error

	cout << "ERROR vector<int> passed in ArraySum function" << endl;
	return *x;
}

template <> std::vector <int> MaxOne<std::vector <int>>(std::vector <int> *x, int size) { //returns largest element in a vector
	//get largest element from vector
	vector<int>::iterator it; 
	it = max_element(x->begin(), x->end()); 
	int k = *it; 

	std::vector <int> largestElement; 
	largestElement.push_back(k); //store largest element
	return largestElement; 
}

template <> const char* ArraySumOne <const char*>(const char *x[], int size) {
	
	cout << "ERROR string passed to sum-function";
	return *x;
}

template <> const char* MaxOne<const char*>(const char *x[], int size) { //guess i could return max ascii value
	
	cout << "ERROR MAxOne<const char*>()";
	return *x;
}