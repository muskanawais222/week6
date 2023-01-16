#include <iostream>
using namespace std;
char checkResult(int marks);
main()
{
 int marks;
 char grade;
 cout<< "Enter marks";
 cin>> marks;
 grade = checkResult(marks);
 cout<< "grade is " <<grade;

}
char checkResult(int marks)
{
    char grade;
    if (marks < 50)
    {
        grade = 'F';
    }
     else if (marks >= 50 && marks < 60 )
     {
        grade = 'E';
     }
    else if (marks >= 60 && marks < 70 )
     {
        grade = 'D';
     }
    else if (marks >= 70 && marks < 80 )
     {
        grade = 'C';
     }
    else if (marks >= 80 && marks < 85 )
     {
        grade = 'B';
     }
     else
     {
        grade = 'A';
     }
     
    
     return grade;
     
}