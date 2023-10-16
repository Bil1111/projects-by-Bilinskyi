// Упорядкувати за спаданням масив, що містить 10 цілих чисел. Використати покажчики
#include <iostream>
using namespace std;

void FillArray(int arr[], int size);
void SortArray(int arr[], int size);
void ShowArray(int arr[], int size);

int main()
{
    srand(time(nullptr));

    const int SIZE = 10;
    int arr[SIZE]{};

    FillArray(arr, SIZE);
    ShowArray(arr, SIZE);
    cout << "\n";
    SortArray(arr, SIZE);
    ShowArray(arr, SIZE);
}

void FillArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 100;
    }
}

void ShowArray(int arr[], int size)
{
    cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << "]";
}

void SortArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (*(arr + j) > *(arr + j - 1))
            {
                swap(*(arr + j), *(arr + j - 1));
            }
        }
    }
}