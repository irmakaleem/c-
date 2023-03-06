#include <iostream>
using namespace std;

int main()
{
    int arr[50], n, smallest, secondSmallest;

    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Find the smallest element in the array
    smallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    // Find the second smallest element in the array
    secondSmallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }

    cout << "The second smallest element in the array is: " << secondSmallest;

    return 0;
}
