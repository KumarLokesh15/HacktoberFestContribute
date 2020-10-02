#include "calculator.h"
#include <math.h>


double addition(double firstNumber,double secondNumber)
{
    return firstNumber+secondNumber;
}
double subtract(double firstNumber,double secondNumber)
{
    return firstNumber-secondNumber;
}
double multiplication(double firstNumber,double secondNumber)
{
    return firstNumber*secondNumber;
}
double divide(double divident,double divisor)
{
    return divident/divisor;
}
double remainder(double divident,double divisor)
{
    int firstNumberNew=(int)divident;
    int secondNumberNew=(int)divisor;
    
    return firstNumberNew%secondNumberNew;
}
double Power(double firstNumber,double secondNumber)
{
    return pow(firstNumber,secondNumber);
}
