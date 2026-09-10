#include <iostream>

using namespace std;
int main()
{
// Enter Maths marks: 75
// Enter English marks: 68
// Enter C++ marks: 82
// Enter Java marks: 70
// Enter SQL marks: 80
    int English;
    cout<<"Enter English Marks : ";
    cin>>English;
    int Maths;
    cin>>Maths;
     cout<<"Enter Maths Marks : ";
    int SQL;
    cin>>SQL;
     cout<<"Enter SQL Marks : ";
    int Java;
    cin>>Java;
     cout<<"Enter Java Marks : ";
    int Python;
    cin>>Python;
     cout<<"Enter Python Marks : ";
int  Total  = English + Maths + SQL + Java + Python;
float percentage  = (Total/500.0)*100;
// Total Marks: 375
// Percentage: 75%
// Result: Pass
// Grade: A

cout<<"Total Marks : "<<Total<<endl;

cout<<"Percentage : "<<percentage<<"%"<<endl;

if (English<35 || Maths<35 || SQL<35 || Java<35 || Python<35)
{
    cout<<"Result : Fail"<<endl;
}
else{
    cout<<"Result : Pass"<<endl;
}

if (percentage>=75)
{
    cout<<"Grade : A";
}

else if (percentage>=60)
{
    cout<<"Grade : B";
}

else if (percentage>=50)
{
    cout<<"Grade : c";
}
else if (percentage>=35)
{
    cout<<"Grade : D";
}

else 
{
    cout<<"Grade : E";
}





    
   
}