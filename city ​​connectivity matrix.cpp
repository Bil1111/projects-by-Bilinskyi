#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string Arr[]{"Вінниця", "Київ   ", "Львів  ", "Мюнхен ", "Щецин  "};
    int n;
    cout << "size MxN: ";
    cin >> n;

    int M[n][n];

    // Створюємо матрицю зв'язності
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "element[" << i << " " << j << "]: ";
            cin >> M[i][j];
            cout << endl;
        }
    }

    cout << "Матриця зв'язності: " << endl;
    cout << "       Вінниця(0) Київ(1) Львів(2) Мюнхен(3) Щецин(4)" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i];
        for (int j = 0; j < n; j++)
        {
            cout << setw(7) << M[i][j] << " ";
        }
        cout << endl;
    }

    // Знаходимо всі пари міст, зв'язаних між собою не напряму, але не більше ніж з однією пересадкою
    cout << "Пари міст: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Перевіряємо, чи зв'язані міста i та j напряму
            if (M[i][j] == 1)
            {
                continue;
            }

            // Перевіряємо, чи зв'язані міста i та j з однією пересадкою
            for (int k = 0; k < n; k++)
            {
                if (M[i][k] == 1 && M[k][j] == 1)
                {
                    cout << "[" << i << " " << j << "]";
                    switch (k)
                    {
                    case 1:
                    {
                        cout << " Через Київ" << endl;
                    }
                    break;

                    case 2:
                    {
                        cout << " Через Львів" << endl;
                    }
                    break;
                    case 3:
                    {
                        cout << " Через Мюнхен" << endl;
                    }
                    break;
                    case 4:
                    {
                        cout << " Через Щецин" << endl;
                    }
                    break;
                    }
                }
            }
        }
    }

    return 0;
}
