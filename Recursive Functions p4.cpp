// Homework 4: Array sum

#include <iostream>
using namespace std;
int sum(int arr[], int len) 
{
	if (len == 1)
		return arr[0];
	return arr[len-1] + sum(arr, len-1);
}
int main()
{
	int arr[] = { 1,8,2,10,3 };
	cout << sum(arr, 5);
}
   