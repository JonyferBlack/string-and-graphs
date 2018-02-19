/*
 * string_exact_match.h
 *
 *  Created on: Feb 18, 2018
 *      Author: aivanov
 */

#ifndef STRING_EXACT_MATCH_H_
#define STRING_EXACT_MATCH_H_

#include <string>
#include <vector>

using std::string;
using std::vector;

namespace string_exact_match_exersises {

bool string_match_naive(const string& text, const string& pattern);
bool linear_time_pattern_search(const string& text, const string& pattern);

vector<int> z_algorithm_naive(const string& s);
vector<int> z_algorithm(const string& s);

}

#endif /* STRING_EXACT_MATCH_H_ */
