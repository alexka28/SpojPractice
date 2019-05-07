#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// https://www.spoj.com/problems/ADDREV/

void checkResult(string& result) {
	for (auto it = result.begin(); it != result.end(); ) {
		if (*it != '0') {
			return;
		}
		it = result.erase(it);
	}
}
int main()
{
	int testCases, currentTest = 1;
	cin >> testCases;

	while (currentTest <= testCases) {
		string first, second;
		cin >> first >> second;
		reverse(first.begin(), first.end());
		reverse(second.begin(), second.end());
		unsigned long long int firstNum = stoi(first);
		unsigned long long int secondNum = stoi(second);
		auto result = firstNum + secondNum;
		string resultString = to_string(result);
		reverse(resultString.begin(), resultString.end());
		checkResult(resultString);
		cout << resultString << endl;
		++currentTest;
	}
}