#include <iostream>

using namespace std;

int add(int a, int b) {
   return a + b;
};
int subtract(int a, int b) {
    return a - b;
};
int multiply(int a, int b) {
    return a * b;
};
int divide(int a, int b) {
    return a / b;
};

int main(void) {

    int sel, num1, num2 = 0; 
    

    do {
        cout << "-------Calculator-------" << endl;
        cout << "1.Addition" << endl;
        cout << "2.Subtraction" << endl;
        cout << "3.Multiplication" << endl;
        cout << "4.Division" << endl;
        cout << "5.Exit" << endl;
        cout << "------------------------" << endl;
        cout << "Select your operation: ";
        cin >> sel;

        if(sel != 1 || sel != 2 || sel != 3 || sel != 4) {
            cout << "Invalid input. Please enter a number between 1 and 5." << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if(sel == 1) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Result : " << num1 << " + " << num2 
            << " = " << add(num1, num2) << endl;
        }
        if(sel == 2) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Result : " << num1 << " - " << num2 
            << " = " << subtract(num1, num2) << endl;
        }
        if(sel == 3) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Result : " << num1 << " x " << num2 
            << " = " << multiply(num1, num2) << endl;
        }
        if(sel == 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Result : " << num1 << " / " << num2 
            << " = " << divide(num1, num2) << endl;
        }
    } while (sel != 5);

    cout << "Exiting..." << endl;

    return 0;
}