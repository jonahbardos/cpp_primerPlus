#include <iostream>
#include <cmath>
using namespace std;
void two();

int main() {
    two();
    return 0;
}

void one()
{
    cout << "My name is Harry Potter and I am from Hogwarts";
}

void two()
{
    // one furlong is 220 yards
    int furlongs;
    cout << "Furlongs to yards";
    cin >> furlongs;
    cout << "Furlongs " << furlongs << " == " << furlongs * 220;
}

void three()
{
    cout << "Three blind mice \n";
}

void three_point2()
{
    cout << "See how they run\n";
}

void four()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    int age_to_months = 12 * age;
    cout << "Your age in months" << age_to_months;
}

void five()
{
    cout << "Please enter a Celsius Value: ";
    int celsius;
    cout << celsius << " degrees Celsius is " << 1.8 * celsius + 32.0 << " Farenheit";
}

void six(){
    
}
