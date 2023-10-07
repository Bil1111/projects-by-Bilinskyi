#include <iostream>
using namespace std;

// гра вгадай число
int b = 9;
void foo()
{
    cin >> b;
}

int main()
{
    int a;
    cout << "Загадайте число: ";
    cin >> a;

    int index = 1;
    while (b != a)
    {
        cout << "Ваша спроба: ";
        foo();
        cout << "Лічильник спроб: " << index << endl;
        if (b == a)
        {
            cout << "\tCONGRATULATIONS!!!" << endl;
            cout << "Вітаю, ви вгадали число! Загадане число = " << a << "." << endl;
            cout << "Кількість витрачених спроб: " << index;
        }
        index += 1;
    }
}