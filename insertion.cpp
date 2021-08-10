/*
 Gurukul kangri university-1st sessional Exam 2020-21
 
 Name- Ravi Kumar s/o- Mr. Ajay pal singh
 Roll no. - 205401031
 Enrollment no.- 200594
 Class- MCA(2nd sem.) 
 Subject- Dtastructure lab (MCA-C251)
 Date- 31/07/1997

 */

 //Program 1 - insertion sort

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = { 8, 5, 9, 12, 16, 7, 9, 4, 7, 5, 2, 7, 8, 1, 7, 9, 5, 10, 15, 14, 16, 12 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}


