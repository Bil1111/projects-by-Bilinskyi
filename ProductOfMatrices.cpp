#include <iostream>
using namespace std;

int main()
{
    cout << "Множення матрирць A(2x3) i B(3x2)" << endl;

    const int ROW = 2;
    const int COL = 3;
    int arr[ROW][COL];

    cout << "Вводимо елементи першої матриці:" << endl;

    cin >> arr[0][0];
    cin >> arr[0][1];
    cin >> arr[0][2];
    cin >> arr[1][0];
    cin >> arr[1][1];
    cin >> arr[1][2];

    const int ROW2 = 3;
    const int COL2 = 2;
    int arr2[ROW2][COL2];

    cout << "Вводимо елементи другої матриці:" << endl;

    cin >> arr2[0][0];
    cin >> arr2[0][1];
    cin >> arr2[1][0];
    cin >> arr2[1][1];
    cin >> arr2[2][0];
    cin >> arr2[2][1];

    cout << "Добуток двох матриць:" << endl;
    cout << (arr[0][0] * arr2[0][0]) + (arr[0][1] * arr2[1][0]) + (arr[0][2] * arr2[2][0]) << "   "
         << (arr[0][0] * arr2[0][1]) + (arr[0][1] * arr2[1][1]) + (arr[0][2] * arr2[2][1]) << endl;
    cout << (arr[1][0] * arr2[0][0]) + (arr[1][1] * arr2[1][0]) + (arr[1][2] * arr2[2][0]) << "   "
         << (arr[1][0] * arr2[0][1]) + (arr[1][1] * arr2[1][1]) + (arr[1][2] * arr2[2][1]) << endl;
}
/*  for (arr i = 0; i < 2; i++)
  {
      for (arr j = 0; j < 3; j++)
      {
          ;
      }
  }*/
