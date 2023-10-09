#include <iostream>
using namespace std;

int main() {
    char choice;
    double temperature, convertedTemperature;

    cout << "Choose conversion type:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == '1') {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemperature = (temperature * 9.0 / 5.0) + 32;
        cout << "Temperature in Fahrenheit: " << convertedTemperature << endl;
    } else if (choice == '2') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemperature = (temperature - 32) * 5.0 / 9.0;
        cout << "Temperature in Celsius: " << convertedTemperature << endl;
    } else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}
