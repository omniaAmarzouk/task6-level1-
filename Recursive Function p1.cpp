// Homework 1: Length of 3n+1

#include <iostream>
using namespace std;
int length_3n_plus_1(int n)
{
	if (n == 1)
		return 1;

	if (n % 2 == 0)
		return 1 + length_3n_plus_1(n / 2);
	else
	return 1 + length_3n_plus_1(3 * n + 1);
}
int main()
{
	cout << length_3n_plus_1(6);
}
   