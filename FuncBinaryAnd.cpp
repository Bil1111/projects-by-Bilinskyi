// Написати і протестувати функцію, яка перетворить рядок двійкових цифр в еквівалентне їй ціле десяткове число.
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int func()
{
    int number = 0;

    string binary;

    cout << "Введіть двійкове число: ";
    cin >> binary;

    vector<int> binaryArray;

    for (char c : binary)
    {
        if (c == '0' || c == '1')
        {
            binaryArray.push_back(c - 48);
        }

        else
        {
            cout << "Число має складатися з 0 та 1!";
            break;
        }
    }

    for (int i = 1; i <= binaryArray.size(); i++)
    {
        cout << binaryArray[binaryArray.size() - i] << " ";
    }
    cout << endl;

    for (int k = 0; k < binaryArray.size(); k++)
    {
        if (binaryArray[k] == 1)
        {
            number += 1 * pow(2, k);
        }
    }

    cout << number;

    return 0;
}

int main()
{
    func();
}
