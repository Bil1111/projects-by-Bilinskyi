#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// створюємо протитип функції
int funcDec();

int main()
{
    // викликаємо функцію
    funcDec();
}

int funcDec() // створюємо функцію, яка буде переводити двійкове число у десяткове
{
    int number = 0;

    string binary;

    cout << "Введіть двійкове число: ";
    cin >> binary;

    vector<int> binaryArray;
    // заповнюємо масив символами 0 і 1
    for (char c : binary)
    {
        if (c == '0' || c == '1')
        {
            binaryArray.push_back(c - 48);
        }
    }

    // перетворюємо двійкове у десяткове
    for (int k = binaryArray.size() - 1, n = 0; 0 <= k; k--, n++)
    {
        if (binaryArray[k] == 1)
        {
            number += 1 * pow(2, n);
        }
    }

    cout << "Перетворення двійкового числа у десяткове: " << number << endl;

    return 0;
}