#include <iostream>
using namespace std;
string checkTitle(int age,string gender);
main()
{
 int age;
 string gender;
 string result;
 cout<< "Enter the age ";
 cin>> age;
cout<< "Enter the gender";
cin>> gender;

result = checkTitle(age , gender);
cout << "title is " << result;


}
string checkTitle(int age,string gender)

{
string title;
if (age >= 16 &&  gender == "male")
{
    title = "mr";

}
 if (age < 16 && gender == "male")
 {
    title = "master";
 }
 if (age >= 16 && gender == "female")
 {
    title = "ms.";
 }
 if (age < 16 && gender == "female")
 {
    title = "miss";
 }
 return title;
}
