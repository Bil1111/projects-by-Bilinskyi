#include <iostream>
using namespace std;

int main()
{
    int f, t;
    cout << "Введіть межі (від/до): " << endl;
    cin >> f >> t;

    int sum = 0;
    while (f < t)
    {
        if (f % 2 != 0)
        {
            sum += f;
        }
        f++;
    }
    cout << "Сума = " << sum;
}
