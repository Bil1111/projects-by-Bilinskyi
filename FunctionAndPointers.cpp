#include <iostream>
using namespace std;

void Foo(int *pa, int *pb)
{
    int temp = (*pa);
    (*pa) = (*pb);
    (*pb) = temp;
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

    Foo(&a, &b);
    cout << "Значення a = " << a << endl;
    cout << "Значення b = " << b << endl;
}
