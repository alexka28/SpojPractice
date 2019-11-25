// https://www.spoj.com/problems/FAVDICE/
// Coupon collector problem 
#include <iostream>
#include <iomanip>

int main()
{
	int testCases = 0;
	int number = 0;
	std::cin >> testCases;
	std::cout << std::fixed;
	while (testCases--){
		std::cin >> number;
		double solution = 0.0;
		for(int i = 1; i <= number; ++i){
			solution += 1.0 / i;
			}
		solution *= number;
		std::cout <<std::setprecision(2)<< solution << "\n";
	}
	std::cout << std::endl;
}
