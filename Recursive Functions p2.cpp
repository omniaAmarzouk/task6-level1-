//Homework 2: Power function

#include <iostream>
using namespace std;
int my_pow(int value, int p = 2)
{
	
	if (p == 0)
		return 1;
	p--;
	return value * my_pow(value, p);
}
int main()
{
	int n, p;
	cout << "Enter base and power: ";
	cin >> n >> p;
	cout << my_pow(n, p);
}