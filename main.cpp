// Arrays/2D Arrays:
// Write code real C++ code to dynamically allocate arrays and 2D arrays, as well as deallocate.
#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    // int* arr = new int[size]; this works
    
    // This also works
    int* arr;
    arr = new int[size];
    
    // Intializes all array elements to numbers 0 to 9
    for(int i = 0; i < size; i++)
    {
        arr[i] = i;
    }

    // Prints the entire array (0 - 9)
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }

    // Deallocating the array
    delete[] arr;
    arr = nullptr;


    if(arr == nullptr)
    {
        cout << "\n\narr == nullptr\n\n";
    }
    
    int numRows = 3;
    int numColumns = 2;

    // 3 rows
    int** matrix = new int*[numRows];
    
    // 2 columns
    for(int r = 0; r < numRows; r++)
    {
        matrix[r] = new int[numColumns];
    }
    
    // Intializing 2D array
    // For-loop for rows
    for(int r = 0; r < numRows; r++)
    {
        // For-loop for columns
        for(int c = 0; c < 2; c++)
        {
            matrix[r][c] = c;
        }
    }

    // Printing 2D array
    // For-loop for rows
    for(int r = 0; r < numRows; r++)
    {
        // For-loop for columns
        for(int c = 0; c < numColumns; c++)
        {
            cout << matrix[r][c] << ' ';
        }
        cout << '\n';
    }

    // Deallocating 2D array
    for( int r = 0; r < numRows; r++)
    {
        delete[] matrix[r];
    }
    delete[] matrix;
    matrix = nullptr;

    if(matrix == nullptr)
    {
        cout << "\nmatrix == nullptr\n\n";
    }

    return 0; 
}