// Homework 3: Array maximum

#include <iostream>
using namespace std;
int arr_max(int arr[], int len)
{
	int max = arr[0];
	for (int i = 0; i < len; ++i)
		if (arr[i] >= max)
			max=arr[i];
		else
	    return arr_max(arr, len - 1);
	return max;
}
int main()
{
	int arr[100000], len;
	cout << "Enter length: ";
	cin >> len;
	for (int i = 0; i < len; ++i)
		cin >> arr[i];
	cout << arr_max(arr, len);
}