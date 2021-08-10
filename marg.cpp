/*Write a MixTwoArrays() function to transfer the content from two arrays a[ ] and
b[ ] to array c[ ]. The even places (0, 2, 4, …) of array c[ ] should get the content
from the array a[ ] and odd places (1, 3, 5, …) of the array c[ ] should get the
contents from the array b[ ].
e.g. if the a[ ] array contains
30, 60, 90
and the b[ ] array contains
10, 50, 80
The c [ ] array should contain
30, 10, 60, 50, 90, 80*/

// C++ program to merge two sorted arrays/
#include<iostream>
using namespace std;

// Alternatively merge arr1[0..n1-1] and arr2[0..n2-1]
// into arr3[0..n1+n2-1]
void alternateMerge(int arr1[], int arr2[], int n1,
					int n2, int arr3[])
{
	int i = 0, j = 0, k = 0;

	// Traverse both array
	while (i<n1 && j <n2)
	{
		arr3[k++] = arr1[i++];
		arr3[k++] = arr2[j++];
	}

	// Store remaining elements of first array
	while (i < n1)
		arr3[k++] = arr1[i++];

	// Store remaining elements of second array
	while (j < n2)
		arr3[k++] = arr2[j++];
}

// Driver code
int main()
{
	int arr1[] = {30, 60, 90};
	int n1 = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[] = {10, 50, 80};
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	int arr3[n1+n2];
	alternateMerge(arr1, arr2, n1, n2, arr3);

	cout << "Array after merging" <<endl;
	for (int i=0; i < n1+n2; i++)
		cout << arr3[i] << " ";

	return 0;
}
