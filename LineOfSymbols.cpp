#include <iostream>
using namespace std;

int main()
{
    int symbolCount;
    cout << "Введіть число символів: ";
    cin >> symbolCount;

    char symbol;
    cout << "Введіть символ: ";
    cin >> symbol;

    int lineType;
    cout << "Виберіть вид лінії:" << endl
         << "1 - горизонтальна" << endl
         << "2 - вертикальна" << endl;
    cin >> lineType;

    if (lineType != 1 && lineType != 2)
    {
        cout << "Некоректний тип лінії!!!" << endl;
    }

    int index = 0;
    while (index < symbolCount)
    {
        if (lineType == 1)
        {
            cout << symbol;
        }
        if (lineType == 2)
        {
            cout << symbol << endl;
        }
        index++;
    }
}
