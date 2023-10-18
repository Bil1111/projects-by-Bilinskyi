// connection between cities with one transfer
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    string Arr1[]{"      Вінниця", "   Київ", "   Львів", "     Мюнхен", "    Щецин", " Хмельницький", "Одеса", "   Дніпро", "  Харків", "   Рівне"};
    string Arr2[]{"Вінниця     ", "Київ        ", "Львів       ", "Мюнхен      ", "Щецин       ", "Хмельницький", "Одеса       ", "Дніпро      ", "Харків      ", "Рівне       "};
    string Arr3[]{"Вінниця", "Київ", "Львів", "Мюнхен", "Щецин", "Хмельницький", "Одеса", "Дніпро", "Харків", "Рівне"};

    int probability;
    cout << "Enter the probability of occurrence of 1: ";
    cin >> probability;

    int n;
    cout << "size ROWSxCOLS: ";
    cin >> n;

    int M[n][n];

    // we create a two-dimensional array and fill it with 1s and 0s
    int RandomElements[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            RandomElements[i][j] = probability - n * n / 2 + rand() % (n * n) >= n * n / 2;
        }
    }
    // fill the matrix with random numbers
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            M[i][j] = RandomElements[i][j];
        }
    }
    // show the matrix
    cout << "Матриця зв'язності: " << endl;
    cout << "            ";
    for (int i = 0; i < n; i++)
    {
        cout << Arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << Arr2[i];
        for (int j = 0; j < n; j++)
        {
            cout << setw(9) << M[i][j] << " ";
        }
        cout << endl;
    }

    // We find all pairs of cities connected to each other not directly, but with no more than one transfer
    cout << "Пари міст: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // We check whether cities i and j are directly connected
            if (M[i][j] == 1)
            {
                continue;
            }

            // We check whether cities i and j are connected to the same transfer
            for (int k = 0; k < n; k++)
            {
                if (M[i][k] == 1 && M[k][j] == 1)
                {
                    if (i == j)
                    {
                        continue;
                    }
                    cout << "[" << Arr3[i] << " " << Arr3[j] << "] "
                         << "Через " << Arr3[k] << endl;
                }
            }
        }
    }

    return 0;
}
