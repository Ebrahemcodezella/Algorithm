#include <iostream>
#include <algorithm>
using namespace std;
void print(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void SelectionSort(int arr[], int size)
{
    // time complixty O(n^2)
    for (int i = 0; i < size - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[index] > arr[j])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    print(arr, size);
}

int main()
{
    int arr[] = {6, 2, 3, 8, 1};
    SelectionSort(arr, 5);
}