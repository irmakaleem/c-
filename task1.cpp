#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10; // Declare constant for array size

int main()
{
    int arr[ARRAY_SIZE]; // Declare an array of size ARRAY_SIZE
    cout << "Enter " << ARRAY_SIZE << " integers:" << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cin >> arr[i]; // Read input from user and store in array
    }

    // Sort array in descending order using selection sort
    for (int i = 0; i < ARRAY_SIZE - 1; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < ARRAY_SIZE; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        if (maxIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }

    // Print out the array in descending order
    cout << "Array in descending order:" << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    r0eturn 0;
}
