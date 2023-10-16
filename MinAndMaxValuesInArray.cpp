#include <iostream>
using namespace std;
// min=last max=1

void FillArray(int arr[], int SIZE);
void ShowArray(int arr[], int SIZE);
void SearchMin(int arr[], int SIZE);
void SearchMax(int arr[], int SIZE);

int main()
{
    srand(time(NULL));

    int SIZE;
    cout << "Введіть к-сть елементів масиву: ";
    cin >> SIZE;

    int arr[SIZE]{};

    FillArray(arr, SIZE);
    ShowArray(arr, SIZE);
    SearchMin(arr, SIZE);
    SearchMAx(arr, SIZE);
}

void FillArray(int arr[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 50;
    }
}
void ShowArray(int arr[], int SIZE)
{
    cout << "Готовий масив: [";
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}
void SearchMin(int arr[], int SIZE)
{
    int minValue = arr[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
    }
    cout << "Мінамальне число у масиві = " << minValue << endl;
}
void SearchMAx(int arr[], int SIZE)
{
    int maxValue = arr[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }
    cout << "Максимальне число у масиві = " << maxValue << endl;
}