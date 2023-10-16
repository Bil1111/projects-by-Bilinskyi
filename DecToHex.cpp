#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// створюємо протитипи функцій
int funcDec();
int funcHex();

int main()
{
    // викликаємо функції
    funcDec();
    funcHex();
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

int funcHex() // створюємо функцію, яка буде переводити десяткове число у шістнадцяткове
{
    char numHex[]{"0123456789ABCDEF"};
    int arr[100];
    int k = 0;
    // оголошуємо та ініціалізуємо змінну
    int number;
    cout << "Введіть десяткове число, яке хочете перевести у шістнадцяткову систему: ";
    cin >> number;

    // створюємо цикл який візьме по цифрі і додасть у масив
    int number2 = number;
    while (number >= 16)
    {
        number %= 16;
        arr[k] = number;
        k++;
        number2 /= 16;
        number = number2;
    }
    arr[k] = number2;

    // виводимо шістнадцяткове число
    for (int i = k; i >= 0; i--)
    {
        cout << numHex[arr[i]];
    }
    return 0;
}