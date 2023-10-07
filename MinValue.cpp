#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    int const SIZE = 10;
    int arr[SIZE];

    bool alreadyThere;
    for (int i = 0; i < SIZE;)
    {
        alreadyThere = false;
        int newRandomValue = rand() % 20;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == newRandomValue)
            {
                alreadyThere = true;
                break;
            }
        }
        if (!alreadyThere)
        {
            arr[i] = newRandomValue;
            i++;
        }
    }

    int minValue = arr[0];

    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
    }
    cout << "Мінамальне число у масиві = " << minValue;
}
