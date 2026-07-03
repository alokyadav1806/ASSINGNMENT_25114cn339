#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int temp = n, rev = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    return temp == rev;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome Number";
    else
        cout << "Not Palindrome Number";

    return 0;
}