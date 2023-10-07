#include <iostream>

using namespace std;

int main()
{
    // Оголошення змінних
    int m, n, a[100][100], b[100][100], c[100][100];

    // Введення розмірів матриць
    cout << "Введіть кількість рядків у матриці A: ";
    cin >> m;
    cout << "Введіть кількість стовпців у матриці A: ";
    cin >> n;

    // Введення елементів матриці A
    cout << "Введіть елементи матриці A: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    // Введення елементів матриці B
    cout << "Введіть елементи матриці B: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }
    }

    // Обчислення результату
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Виведення результату
    cout << "Результат додавання: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
