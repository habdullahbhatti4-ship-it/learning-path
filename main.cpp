#include <iostream>
using namespace std;
int main()
{
    float number1,number2;
    char ch;
    cout<<"enter your number  ";
    cin>>number1;
    cout<<"chouse your operater  ";
    cin>>ch;
     cout<<"enter your number  ";
    cin>>number2;
    if (ch == '+')
    {
       cout<<"your answer is "<<number1 + number2 <<endl;
    }
    else if (ch == '-')
    {
     cout<<"your answer is "<<number1 * number2 <<endl;   
    }
    else if (ch == '*')
    {
     cout<<"your answer is "<<number1 * number2 <<endl;   
    }else if (ch == '/')
    {
     cout<<"your answer is "<<number1 / number2 <<endl;   
    }
    else 
    cout<<"your enter wrong operater ";
    
}