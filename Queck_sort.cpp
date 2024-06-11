#include <iostream>
using namespace std;

void print_arr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl; // Added endl for better readability
}

int partition(int *arr, int low, int high)
{
    int i = low + 1;
    int j = high;
    int pivot = arr[low]; // Corrected pivot initialization

    do
    {
        while (arr[i] <= pivot && i <= high) // Corrected boundary condition
        {
            i++;
        }
        while (arr[j] > pivot && j >= low) // Corrected boundary condition
        {
            j--;
        }
        if (i < j) // Swap only if i < j
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    // Swap pivot with arr[j]
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void Quick_Sort(int *arr, int low, int high)
{
    if (low < high)
    {
        int partition_index = partition(arr, low, high);
        Quick_Sort(arr, low, partition_index - 1);
        Quick_Sort(arr, partition_index + 1, high);
    }
}

int main()
{
    int arr[7] = {6, 2, 4, 10, 11, 1, 100};
    Quick_Sort(arr, 0, 6);
    print_arr(arr, 7); // Now print the sorted array
    return 0;
}
