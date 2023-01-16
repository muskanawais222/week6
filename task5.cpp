#include <iostream>
using namespace std;
string iseven(int number);
main()
{
 int number1 ;
 string result;
 cout<< "Entera number";
 cin>> number1;
 result = iseven(number1);
 cout<< result;

}
string iseven(int number)
{
    string result;
    if (number % 2 == 0)
    {
        result = "even";
    }
     if (number % 2 != 0)
     {
        result = "odd";
     }
     return result;
}