#include <iostream>
using namespace std;

int main()
{
    int l, w;
    cout << "Введіть довжину та ширину: " << endl;
    cin >> l >> w;

    for (int a = 1; a <= l; a++)
    {

        for (int b = 1; b <= w; b++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
