// Name: Musa Bey
// Course: CIS 005 Intro to Computer Science
// Date: 25 June 2024
// Assignment: Module 3: Assignment - 'Find the Program Errors'' 

#include <iostream> 
using namespace std; 

int main()  
{     
    int number1, number2;     
    float quotient;     
    cout << "Enter two numbers and I will divide\n";    
    cout << "the first by the second for you.\n";     
    cin >> number1 >> number2;    
    quotient = static_cast<float>(number1) / number2;    
    cout << quotient << endl;    
    return 0;
}

