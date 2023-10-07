#include <iostream>
using namespace std;

template <typename T>
void Foo(T &a, T &b)
{

    T c = a;
    a = b;
    b = c;
}

int main()
{
    cout << "Програма міняє місцями  значення у змінних." << endl;

    int a;
    cout << "Введіть значення a: ";
    cin >> a;

    int b;
    cout << "Введіть значення b: ";
    cin >> b;

    cout << "Зараз виконається функція!!!" << endl;

    Foo(a, b);
    cout << "Значення a = " << a << endl;
    cout << "Значення b = " << b << endl;
}
