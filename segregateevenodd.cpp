/*Separate even and odd numbers: Given an array A[], write a function that
segregates even and odd numbers. The functions should put all even numbers
first, and then odd numbers.
Example: Input = {12,34,45,9,8,90,3} Output = {12,34,8, 90, 45, 9, 3}*/

#include <iostream>
using namespace std;
void arrayEvenAndOdd(int arr[], int n)
{
	int a[n], ind = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			a[ind] = arr[i];
			ind++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
		{
			a[ind] = arr[i];
			ind++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

// Driver code
int main()
{
	int arr[] = { 12, 34, 45, 9, 8, 90, 3 };
	int n = sizeof(arr) / sizeof(int);

	// Function call
	arrayEvenAndOdd(arr, n);
	return 0;
}
