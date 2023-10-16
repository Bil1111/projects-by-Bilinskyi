#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    srand(time(NULL));
    int Row;
    cout << "Введіть кількість стовпців/рядків (від 1 до 5): ";
    cin >> Row; // ввід для стовпців і рядків один, тому що головна діагональ є тільки в квадратній матриці

    int sum = 0;

    int arr[Row][Row];
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Row; j++)
        {
            arr[i][j] = rand() % 10 - 5;
        }
    }

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Row; j++)
        {
            cout << setw(4);
            cout << arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i][j] < 0)
            {
                sum += arr[i][j];
            }
        }
    }
    cout << "Suma = " << sum;
}