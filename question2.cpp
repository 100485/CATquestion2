#include <iostream>
using namespace std;

int main()
{
//Converting Temperature from Fahrenheit to Celsius

//Declaration 
double tempCel;
double tempFahre;

cout << "Enter the temperature in Fahrenheit: ";
cin >> tempFahre;

//Formula
tempCel = (5.0/9.0) * (tempFahre - 32.0);


cout << "Temperature in Celcius is: "<< tempCel << endl;

return 0;

}