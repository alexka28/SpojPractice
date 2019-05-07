#include <iostream>
#include <string>
#include <map>
using namespace std;

// https://www.spoj.com/problems/SBANK/

int main()
{
	int testCases, currentTestCase = 1;

	cin >> testCases;
	while (currentTestCase <= testCases) {
		int numberOfAccounts, rowCounter = 1;
		cin >> numberOfAccounts;
		map<string, int> accounts;

		while (rowCounter <= numberOfAccounts) {
			string row;
			getline(cin, row);

			if (row.empty()) {
				continue;
			}

			auto result = accounts.find(row);

			if (result != accounts.end()) {
				auto value = result->second;
				++value;
				accounts[row] = value;
			}
			else {
				accounts[row] = 1;
			}

			++rowCounter;
		}
		for (auto it = accounts.begin(); it != accounts.end(); ++it) {
			cout << it->first << " " << it->second << endl;
		}
		cout << endl;

		++currentTestCase;
	}

}