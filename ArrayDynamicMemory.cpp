#include <iostream>
using namespace std;

int main()
{
    int rows = 4;
    int cols = 5;

    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    // Заповнення масиву
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 20;
        }
    }
    // вивід
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
}