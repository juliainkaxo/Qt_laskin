#include <iostream>
using namespace std;

int main()
{

    // Ensimmäinen laskutoimitus
    int num1, num2;
    char op;

    cout << "Make a calculation: ";
    cin >> num1;
    cin >> op;
    cin >> num2;
    int result;

    if(op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    }else if (op == '/') {
        result = num1 / num2;
    }else if (op == '*') {
        result = num1 * num2;
    } else {
        cout << "Invalid operator";
    }

    cout << result << endl;

    int num3;
    char op2;

    cout << "Please continue your calculation:"; result;

    cin >> op2;
    cin >> num3;

    int result2;

    if(op2 == '+') {
        result2 = result + num3;
    } else if (op2 == '-') {
        result2 = result - num3;
    }else if (op2 == '/') {
        result2 = result / num3;
    }else if (op2 == '*') {
        result2 = result * num3;
    } else {
        cout << "Invalid operator";
    }

    cout << result2;

    return 0;

}
