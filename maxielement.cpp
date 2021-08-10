/*Given a min-heap, give an algorithm for finding the maximum element*/

#include <bits/stdc++.h>
using namespace std;

// Function to find the
// maximum element in a
// min heap
int findMaximumElement(int heap[], int n)
{
	int maximumElement = heap[0];

	for (int i = 1; i < n; ++i)
		maximumElement = max(maximumElement, heap[i]);

	return maximumElement;
}

// Driver code
int main()
{
	// Number of nodes
	int n = 10;

	// heap represents the following min heap:
	//	 10
	// / \
	// 25	 23
	// / \ / \
	// 45 50 30 35
	// / \ /
	// 63 65 81
	int heap[] = { 10, 25, 23, 45, 50, 30, 35, 63, 65, 81 };

	cout << findMaximumElement(heap, n);

	return 0;
}
