// Homework 5: Array average

#include <iostream>
using namespace std;
double average(double arr[], int len)
{
	if (len == 1)
		return arr[0];
	return (arr[len - 1] + average(arr, len - 1) * (len - 1)) / len;
}

int main()
{
	double arr[] = { 1,8,2,10,3 };
	cout << average(arr, 5);
}
   