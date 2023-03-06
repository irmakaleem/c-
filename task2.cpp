
#include <iostream>
using namespace std;

// Main function
int main()
{

    float arr[100];
    int n;
    float sum = 0;
    float avg;

    cout << "Enter the number of elements you want to enter: ";
    cin >> n;

    // Input elements of array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Calculate sum
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    // Calculate average
    avg = sum / n;

    // Display sum and average
    cout << "Sum of the array elements is: " << sum << endl;
    cout << "Average of the array elements is: " << avg;

    return 0;
}