#include <iostream>
using namespace std;

int more_less()
{
    double firstNum;
    double secondNum;
    double thirdNum;

    cout << "Enter num : ";
    cin >> firstNum;

    cout << "Enter num : ";
    cin >> secondNum;

    cout << "Enter num : ";
    cin >> thirdNum;

    if (firstNum < secondNum && thirdNum)
    {
        cout << firstNum << "\n\n";
    }


    else if (secondNum < firstNum && thirdNum)
    {
        cout << secondNum << "\n\n";
    }


    else if (thirdNum < firstNum && secondNum)
    {
        cout << thirdNum << "\n\n";
    }
    
    return 0;
}


int odd_even()
{
    int num;

    cout << "Enter num : ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "num is even" << "\n\n";
    }
    
    else
    {
        cout << "num is odd" << "\n\n";
    }

    return 0;
}


int calculate()
{
    double first;
    double second;
    string choice;

    cout << "Enter first second : ";
    cin >> first;

    cout << "Enter second second : ";
    cin >> second;

    cout << "Make yout choice : \n\t '+' \n\t '-' \n\t '*' \n\t '/' \n\t '%' \n ";
    cin >> choice;

    if (choice == "+")
    {
        cout << first << " + " << second << first + second << " = ";
    }


    else if (choice == "-")
    {
        cout << first << " - " << second << first - second << " = ";
    }


    else if (choice == "/")
    {
        cout << first << " / " << second << first / second << " = ";
    }


    else if (choice == "*")
    {
        cout << first << " * " << second << first * second << " = ";
    }


    else if (choice == "%")
    {
        cout << first << " % " << second << " = " << first * (second / 100) << "\n\n";
    }

    return 0;
}


int symbol()
{
    char symbol;

    cout << "Enter sybmol: ";
    cin >> symbol;


    if (isdigit(symbol))
    {
        cout << "\nsymbol is digit\n";
    }


    else if (isalpha(symbol))
    {
        cout << "\nsymbol is alpha\n";
    }


    else if (ispunct(symbol))
    {
        cout << "\nsymbol is punct\n";
    }


    else
    {
        cout << "\nsymbol is not digit/alpha/punct\n";
    }

    return 0;
}


int multiply()
{
    int num;

    cout << "Enter num : ";
    cin >> num;

    if (num % 3 == 0)
    {
        cout << "num is multiple of 3" << "\n\n";
    }


    if (num % 5 == 0)
    {
        cout << "num is multiple of 5" << "\n\n";
    }


    if (num % 7 == 0)
    {
        cout << "num is multiple of 7" << "\n\n";
    }


    else
    {
        cout << "num is not multiple 3/5/7" << "\n\n";
    }

    return 0;
}


int consist()
{
    int num;

    cout << "Enter num : ";
    cin >> num;

    if (num > 1 and num < 10)
    {
        cout << "number consists of 1 digit" << "\n\n";
    }

    else if (num > 10 and num < 100)
    {
        cout << "number consists of 2 digit" << "\n\n";
    }

    else if (num > 100 and num < 1000)
    {
        cout << "number consists of 3 digit" << "\n\n";
    }

    else if (num > 1000 and num < 10000 )
    {
        cout << "number consists of 4 digit" << "\n\n";
    }

    else
    {
        cout << "number consists of > 4 digit or 0" << "\n\n";
    }

    return 0;
}


int main()
{
    more_less();
    odd_even();
    calculate();
    symbol();
    multiply();
    consist();
}