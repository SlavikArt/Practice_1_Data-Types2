#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "rus");

    const float celsius_to_fahrengeit = 1.8;
    const float fahrenheit_to_celsius = 1.8;

    float celsius;
    float fahrenheit;


    cout << "Введите градусы в цельсиях: ";
    cin >> celsius;

    fahrenheit = celsius * celsius_to_fahrengeit + 32;

    cout << celsius << " градусов цельсия в фаренгейтах это " << fahrenheit << "\n\n";

    cout << "Введите градусы в фаренгейтах: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) / fahrenheit_to_celsius;

    cout << fahrenheit << " градусов фаренгейта в цельсиях это " << celsius << "\n";







}
