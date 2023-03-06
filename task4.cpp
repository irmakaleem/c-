
#include <iostream>
using namespace std;

const int rows = 3;
const int cols = 3;

// Function to print a matrix
void printMatrix(int mat[][cols], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to add two matrices
void addMatrix(int mat1[][cols],
               int mat2[][cols],
               int res[][cols],
               int rows, int cols)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            res[i][j] = mat1[i][j] + mat2[i][j];
}

// Function to subtract two matrices
void subtractMatrix(int mat1[][cols],
                    int mat2[][cols],
                    int res[][cols],
                    int rows, int cols)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            res[i][j] = mat1[i][j] - mat2[i][j];
}

// Function to multiply two matrices
void multiplyMatrix(int mat1[][cols],
                    int mat2[][cols],
                    int res[][cols],
                    int rows, int cols)
{
    // Initializing elements of result matrix to 0
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            res[i][j] = 0;
        }
    }

    // Multiplying matrices mat1 and mat2 and
    // storing result in res matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            for (int k = 0; k < cols; k++)
            {
                res[i][j] += mat1[i][k] *
                             mat2[k][j];
            }
        }
    }
}

// Driver Code
int main()
{
    int mat1[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int mat2[rows][cols] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    int res[rows][cols];

    cout << "Matrix 1:" << endl;
    printMatrix(mat1, rows, cols);
    cout << "Matrix 2:" << endl;
    printMatrix(mat2, rows, cols);

    addMatrix(mat1, mat2, res, rows, cols);
    cout << "Result of Addition:" << endl;
    printMatrix(res, rows, cols);

    subtractMatrix(mat1, mat2, res, rows, cols);
    cout << "Result of Subtraction:" << endl;
    printMatrix(res, rows, cols);

    multiplyMatrix(mat1, mat2, res, rows, cols);
    cout << "Result of Multiplication:" << endl;
    printMatrix(res, rows, cols);

    return 0;
}