#include "calculator.h"
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    double firstNumber,secondNumber;
    cout << "Enter two numbers to addition";
    cin >> firstNumber >> secondNumber;

    cout << "Sum :" << addition(firstNumber,secondNumber) << endl;
    cout << "Subtraction :" << subtract(firstNumber,secondNumber) << endl;
    cout << "Multiplication :" << multiplication(firstNumber,secondNumber) << endl;
    cout << "Division :" << divide(firstNumber,secondNumber) << endl;
    cout << "Remainder :" << remainder(firstNumber,secondNumber) << endl;
    cout << "Power :" << Power(firstNumber,SecondNumber) << endl;


    return 0;

    
}
