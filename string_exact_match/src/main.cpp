//============================================================================
// Name        : string pattern matches exersises
// Author      : aivanov
//============================================================================

#include <iostream>
#include "string_exact_match.h"

using namespace std;
using namespace string_exact_match_exersises;

template<typename T>
void print_vector(const vector<T>& v){
	for(const auto& item : v){
		cout << item << " ";
	}
}

int main() {
	string sample_text = "aabcaabxaazaabc";
	string sample_pattern = "aab";

	cout << (string_match_naive(sample_text, sample_pattern) ==
			linear_time_pattern_search(sample_text, sample_pattern) ? "true" : "false") << endl;

	return 0;
}
