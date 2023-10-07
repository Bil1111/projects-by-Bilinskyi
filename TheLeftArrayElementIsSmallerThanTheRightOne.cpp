#include <iostream>
using namespace std;

void FillArray(int *const arr, const int SIZE) // ФУНКЦІЯ, ЩОБ ЗАПОВНИТИ МАСИВ
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 100;
    }
}

int main()
{
    int SIZE; // ІНІЦІАЛІЗУЄМО РОЗМІР МАСИВУ
    cout << "Введіть число N: ";
    cin >> SIZE;

    int arr[SIZE]{};      // ІНІЦІАЛІЗУЄМО МАСВИ
    FillArray(arr, SIZE); // ВИКЛИКАЄМО ФУНКЦІЮ ЗАПОВНЕННЯ МАСИВУ

    int numbers = 0; // ЗАВОДИМО ЛІЧИЛЬНИК ЧИСЕЛ К

    cout << "Заповнений масив [";
    for (int i = 0; i < SIZE; i++) // ЦИКЛ ЩОБ ВИВЕСТИ МАСИВ
    {
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;

    cout << "Номери тих чисел які менші за свого лівого сусіда: ";
    for (int i = 0, j = 1; i < SIZE - 1; i++, j++) // ЦИКЛ ДЛЯ
    {
        if (arr[i] < arr[j]) // дивимося чи лівий сусід менший
        {
            cout << arr[i] << " "; // виводимо меншого сусіда
            numbers += 1;
        }
    }
    cout << endl;
    cout << "Кількість чисел K: " << numbers; // виводимо кількість менших сусідів
}
