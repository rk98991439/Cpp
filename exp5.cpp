#include <algorithm>
#include <iostream>
using namespace std;

struct Job {

	char id; // Job Id
	int dead; // Deadline of job
	int profit; // Profit if job 
};

bool comparison(Job a, Job b)
{
	return (a.profit > b.profit);
}

// Returns maximum profit from jobs
void printJobScheduling(Job arr[], int n)
{
	// Sort all jobs according to decreasing order of profit
	sort(arr, arr + n, comparison);

	int result[n]; // To store result (Sequence of jobs)
	bool slot[n]; // To keep track of free time slots

	// Initialize all slots to be free
	for (int i = 0; i < n; i++)
		slot[i] = false;

	for (int i = 0; i < n; i++) {

		for (int j = min(n, arr[i].dead) - 1; j >= 0; j--) {
			// Free slot found
			if (slot[j] == false) {
				result[j] = i; // Add this job to result
				slot[j] = true; // Make this slot occupied
				break;
			}
		}
	}

	// Print the result
	for (int i = 0; i < n; i++)
		if (slot[i])
			cout << arr[result[i]].id << " ";
}

int main()
{
	Job arr[] = { { '1', 2, 100 },
				{ '2', 1, 19 },
				{ '3', 2, 27 },
				{ '4', 1, 25 },
				{ '5', 3, 15 } };

	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Following is maximum profit sequence of jobs "
			"\n";

	printJobScheduling(arr, n);
	return 0;
}
