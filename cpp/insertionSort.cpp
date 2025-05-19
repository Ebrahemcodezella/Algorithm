#include <iostream>
using namespace std;
void insertion_sort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int j, key;
		j = i - 1;
		key = arr[i];
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;

	}
}
int main()
{
	int arr[] = {76, 43, 32, 13, 54, 23, 12};
	int n = sizeof(arr) / sizeof(arr[0]);
	insertion_sort(arr, n);
	cout << "Sorted array is: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
