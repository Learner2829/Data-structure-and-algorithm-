#include <iostream>
using namespace std;
void merge(int *arr, int low, int high, int mid)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int b[high + 1];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        b[k] = arr[j];
        j++;
        k++;
    }
    int z = low;
    while (z <= high)
    {
        arr[z] = b[z];
        z++;
    }
}

void merge_sort(int *arr, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, high, mid);
    }
}
void print_arr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}
int main()
{
    int arr[7] = {6, 2, 4, 10, 11, 1, 100};
    merge_sort(arr, 0, 6);
    print_arr(arr, 7);
    return 0;
}