#include <iostream>
using namespace std;
float discount(string day , string month , float amount);
main()
{
 float amount;
 string day , month;
 float result;
 cout<< "Enter the day ";
 cin>> day;
cout<< "Enter the month";
cin>> month;
cout<< "Enter amount";
cin>> amount;
result = discount( day ,  month , amount);
cout << result;


}
float discount(string day , string month , float amount)
{
    float discount;
    if (day == "Sunday" &&( month == "August" || month == "October" || month == "March" ))
    
        {
discount = amount - (amount * 0.1);
        }
    
     else if ( day == "Monday" && (month == "November"  || month == "December"))
      {
        discount = amount - (amount * 0.05);
      }

      else
      {
        discount = amount;
      }
      return  discount;
    }

       