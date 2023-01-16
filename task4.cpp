#  include <iostream>
using namespace std;
int isgreat(int number1 , int number2 , int number3);
main()
{ 
 int number1, number2,number3, result;
 cout<< "Enter first number";
 cin>> number1;
 cout<< "Enter second number";
 cin>> number2;
 cout<< "Enter third number";
 cin>> number3;
 
 result =isgreat(number1,number2,number3);
 cout<< result;
}
int isgreat(int number1 , int number2 , int number3)
{
  int greatest;
 if (number1 > number2 && number1 > number3)
 {
  greatest = number1;
} 

if (number2 > number1 && number2 > number3)
 {
  greatest = number2;
}
 if (number3 > number2 && number3 > number1)
 {
  greatest = number3;
}
 return greatest;

}