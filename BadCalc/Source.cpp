#include <iostream>
using namespace std;

void Add(int first, int second)
{
    cout << first + second << endl;
}

void Divide(int first, int second)
{
    cout << (first + 0.0) / second << endl;
}

void multiply(int first, int second)
{
    cout << (first / 1) * second << endl;
}

void Subtract(int first, int second)
{
    cout << first - second << endl;
}

void Power(int first, int pow)
{
    if (pow == 1)
    {
        cout << first << endl;
        cout << "I don't know why you did that" << endl;
    }
    else if (pow == 2)
    {
        cout << first * first << endl;
    }
    else if (pow == 3)
    {
        cout << first * first * first << endl;
    }
    else if (pow == 4)
    {
        cout << first * first * first * first << endl;
    }
    else if (pow == 5)
    {
        cout << first * first * first * first * first << endl;
    }
    else if (pow == 6)
    {
        cout << first * first * first * first * first * first << endl;
    }
    else if (pow == 7)
    {
        cout << first * first * first * first * first * first * first << endl;
    }
    else if (pow == 8)
    {
        cout << first * first * first * first * first * first * first * first << endl;
    }
    else if (pow == 9)
    {
        cout << first * first * first * first * first * first * first * first * first << endl;
    }
    else if (pow == 10)
    {
        cout << first * first * first * first * first * first * first * first * first * first << endl;
    }
    else
    {
        cout << "\"" << pow << "\" Is not a valid NUMBER" << endl;
    }
}

int main()
{
    int answer, first, second, ended, pow;
    string theanswer;
    string sure = " Was your answer";
    string tis = "This: ";
    string iff = "if answer is \"nan\" or \"inf\" it's not a number that can be displayed";
    cout << "  Joe's Calculator v1.1" << endl;
    cout << "What would you like to do?" << endl;
    cout << "(Divide)=1 (Multiply)=2 (Add)=3 (Subtract)=4 (Raising to a power)=5" << endl;
    cout << "If you type a letter, the program will end when you hit enter" << endl;
    cout << "type a NUMBER please: ";
    cin >> answer;
    if (answer == 1)
    {
        theanswer = "\"Divide\"";
        cout << theanswer << sure << endl;
        cout << "___ divided by ___" << endl;
        cout << tis;
        cin >> first;
        cout << "divided by" << endl;
        cout << tis;
        cin >> second;
        cout << "Answer:" << endl;
        Divide(first, second);
        cout << iff << endl;
    }
    else if (answer == 2)
    {
        theanswer = "\"Multiply\"";
        cout << theanswer << sure << endl;
        cout << "___ Multiplied by ___" << endl;
        cout << tis;
        cin >> first;
        cout << "Multiplied by" << endl;
        cout << tis;
        cin >> second;
        cout << "Answer:" << endl;
        multiply(first, second);
        cout << iff << endl;
    }
    else if (answer == 3)
    {
        theanswer = "\"Add\"";
        cout << theanswer << sure << endl;
        cout << "___ Plus ___" << endl;
        cout << tis;
        cin >> first;
        cout << "Plus" << endl;
        cout << tis;
        cin >> second;
        cout << "Answer:" << endl;
        Add(first, second);
        cout << iff << endl;
    }
    else if (answer == 4)
    {
        theanswer = "\"Subtract\"";
        cout << theanswer << sure << endl;
        cout << "___ Minus ___" << endl;
        cout << tis;
        cin >> first;
        cout << "Minus" << endl;
        cout << tis;
        cin >> second;
        cout << "Answer:" << endl;
        Subtract(first, second);
        cout << iff << endl;
    }
    else if (answer == 5)
    {
        theanswer = "\"Raising to a power\"";
        cout << theanswer << sure << endl;
        cout << "___ Raised by ___ power" << endl;
        cout << tis;
        cin >> first;
        cout << "Raised by" << endl;
        cout << "(Up to 10)" << tis;
        cin >> pow;
        Power(first, pow);
        if (pow <= 10)
        {
            cout << iff << endl;
        }
    }
    else
    {
        cout << "\"" << answer << "\" Is not a valid NUMBER" << endl;
    }
    cout << "This program will end after you press anything followed by enter ";
    cin >> ended;
    return 0;
}
