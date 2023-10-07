#include  <iostream>
using namespace std;

int main()
{
   setlocale(LC_ALL, "ukr");

   int a,b;
   cout<<"Введіть два числа: "<<endl;
   cin>>a>>b;

   int operation;
   cout<<"Виберіть операцію над числами (1+; 2-; 3-*; 4-/ ): ";
   cin>>operation;

   switch(operation)
   {

   case 1:
      cout<<a+b;
      break;

   case 2:
      cout<<a-b;
      break;

   case 3:
      cout<<a*b;
      break;

   case 4:
      cout<<a/b;
      break;

   default:
      cout<<"Я не знаю цієї арефметичної операції!!!";
      break;
   }
}
