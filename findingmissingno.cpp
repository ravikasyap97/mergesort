/*Finding the Missing Number: We are given a list of n – 1 integers and these
integers are in the range of 1 to n. There are no duplicates in the list. One of the
integers is missing in the list. Given an algorithm to find the missing integer.
Example: I/P: [1,2,4,6,3,7,8] O/P: 5 */

#include <bits/stdc++.h>
using namespace std;

// Function to get the missing number
int getMissingNo(int a[], int n)
{

	int total = (n + 1) * (n + 2) / 2;
	for (int i = 0; i < n; i++)
		total -= a[i];
	return total;
}

// Driver Code
int main()
{
	int arr[] = { 1, 2, 4, 6, 3, 7, 8 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int miss = getMissingNo(arr, n);
	cout << miss;
}
