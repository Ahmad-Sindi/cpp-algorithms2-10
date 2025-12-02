/* Algorithm Challenge & Problem Solving
 * 10 - Print Digits of a Number in Order (Left to Right)
 *
 * This program reads a positive integer from the user and prints its digits
 * in the exact same order they were entered (from left to right).
 *
 * Since extracting digits normally gives them in reverse order (right to left),
 * the program uses a two-step process:
 *   1. Reverse the original number.
 *   2. Print the digits of the reversed number, which restores the original order.
 */

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int ReverseNumber(int Number)
{
    int Remainder = 0, Number2 = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;            // Extract last digit
        Number = Number / 10;               // Remove last digit
        Number2 = Number2 * 10 + Remainder; // Build reversed number
    }

    return Number2;
}

void PrintDigits(int Number)
{
    int Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10; // Extract last digit
        Number = Number / 10;    // Remove last digit
        cout << Remainder << endl;
    }
}

int main()
{
    PrintDigits(
        ReverseNumber(
            ReadPositiveNumber("Enter a positive number:")));

    return 0;
}
