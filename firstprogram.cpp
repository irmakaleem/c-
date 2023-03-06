#include <iostream>
using namespace std;

int main()
{
    int arr[10], element, pos, n;

    // Input Array Size from user
    cout << "Enter Array Size : ";
    cin >> n;

    // Input Array Elements
    cout << "Enter Array Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Output Array Elements
    cout << "Array Elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    // Insert Element
    cout << "Enter Element to Insert : ";
    cin >> element;
    cout << "Enter Position to Insert : ";
    cin >> pos;
    for (int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = element;
    n++;

    // Output Array Elements after Insert
    cout << "Array Elements after Insertion : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    // Delete Element
    cout << "Enter Position to Delete : ";
    cin >> pos;
    element = arr[pos - 1];
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    // Output Array Elements after Delete
    cout << "Array Elements after Deletion : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}