/*Given an array of n numbers, give an algorithm for checking whether there are
any duplicate elements in the array or no?*/

// C++ implementation of the
// above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the Duplicates,
// if duplicate occurs 2 times or
// more than 2 times in array so,
// it will print duplicate value
// only once at output
void findDuplicates(int arr[], int len)
{
	
	// Initialize ifPresent as false
	bool ifPresent = false;

	// ArrayList to store the output
	vector<int> al;

	for(int i = 0; i < len - 1; i++)
	{
		for(int j = i + 1; j < len; j++)
		{
			if (arr[i] == arr[j])
			{
				
				// Checking if element is
				// present in the ArrayList
				// or not if present then break
				auto it = std::find(al.begin(),
									al.end(), arr[i]);
									
				if (it != al.end())
				{
					break;
				}

				// If element is not present in the
				// ArrayList then add it to ArrayList
				// and make ifPresent at true
				else
				{
					al.push_back(arr[i]);
					ifPresent = true;
				}
			}
		}
	}

	// If duplicates is present
	// then print ArrayList
	if (ifPresent == true)
	{
		cout << "[" << al[0] << ", ";
		for(int i = 1; i < al.size() - 1; i++)
		{
			cout << al[i] << ", ";
		}
		
		cout << al[al.size() - 1] << "]";
	}
	else
	{
		cout << "No duplicates present in arrays";
	}
}

// Driver code
int main()
{
	int arr[] = { 12, 11, 40, 12,
				5, 6, 5, 12, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	findDuplicates(arr, n);

	return 0;
}

