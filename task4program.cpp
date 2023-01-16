#  include <iostream>
using namespace std;
float totalIncome(string screenings , int rows, int column);
main()
{
 string screenings;
 int rows , column;
 int result;
 cout<< "Enter the screenings : ";
 cin>> screenings;
 cout<< "Enter rows :";
 cin>> rows;
 cout<< "Enter columns :";
 cin>> column;
 result = totalIncome (screenings , rows , column);
 cout<< "Total income is :"<< result;
}
 float totalIncome(string screenings , int rows, int column)
{
  float totalIncome;
  if (screenings == "premier")
{
  totalIncome = rows * column * 12.00;
}
  if (screenings == "normal" )
{


  totalIncome = rows * column * 7.50  ;
}

if (screenings == "discount")
{

  totalIncome = rows * column * 5.00;
}
 return totalIncome;
}
 