#include <iostream>
using namespace std;

int main() {
    // --- REPEAT-UNTIL (Equivalent to do-while in C++) ---
    /*
        INTEGER x
        SET x:= 1
        REPEAT
        PRINT x
        INCREMENT x
        UNTIL x <= 10
    */
    int x = 1;
    do {
        cout << x << endl;
        x++;
    } while (x <= 10);

    // --- TABLE PROGRAM ---
    int n, i = 1;
    cout << "Enter an integer for the multiplication table:" << endl;
    cin >> n;
    do {
        cout << (i * n) << endl;
        i++;
    } while (i <= 10);

    // --- WHILE LOOP ---
    /*
        DECLARE n1 : INTEGER
        SET n1:= 1
        WHILE n1 <= 10
        PRINT n1
        INCREMENT n1
        ENDWHILE
    */
    int n1 = 1;
    while (n1 <= 10) {
        cout << n1 << endl;
        n1++;
    }

    // --- FOR LOOP (Sum of first n natural numbers) ---
    int n2, sum = 0;
    cout << "Enter a positive integer for sum:" << endl;
    cin >> n2;
    for (int i1 = 1; i1 <= n2; i1++) {
        sum += i1;
    }
    cout << "The sum of the first " << n2 << " natural numbers is: " << sum << endl;

    // --- SQUARING A NUMBER (Sum of squares) ---
    int n3, sum1 = 0;
    cout << "Enter a positive integer for sum of squares:" << endl;
    cin >> n3;
    for (int i2 = 1; i2 <= n3; i2++) {
        sum1 += i2 * i2;
    }
    cout << "The sum of the squares of the first " << n3 << " natural numbers is: " << sum1 << endl;

    // --- FACTORIAL OF A NUMBER ---
    int n4, fact = 1;
    cout << "Enter a positive integer for factorial:" << endl;
    cin >> n4;
    for (int i3 = n4; i3 >= 1; i3--) {
        fact *= i3;
    }
    cout << "The factorial of " << n4 << " is: " << fact << endl;

    // --- ARMSTRONG NUMBER ---
    int n5, num, b_arm = 0, a_arm;
    cout << "Enter an integer to check Armstrong:" << endl;
    cin >> num;
    n5 = num;
    while (n5 > 0) {
        a_arm = n5 % 10;
        n5 /= 10;
        b_arm = b_arm + (a_arm * a_arm * a_arm);
    }
    if (num == b_arm) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    // --- PALINDROME NUMBER ---
    int n6, num1, rev = 0, rem1;
    cout << "Enter an integer to check Palindrome:" << endl;
    cin >> num1;
    n6 = num1;
    while (n6 > 0) {
        rem1 = n6 % 10;
        rev = rev * 10 + rem1;
        n6 /= 10;
    }
    if (num1 == rev) {
        cout << num1 << " is a palindrome number." << endl;
    } else {
        cout << num1 << " is not a palindrome number." << endl;
    }

    // --- PRIME NUMBER ---
    int n7;
    cout << "Enter an integer to check Prime:" << endl;
    cin >> n7;
    bool isPrime = true;
    if (n7 <= 1) {
        isPrime = false;
    } else {
        for (int i4 = 2; i4 < n7; i4++) {
            if (n7 % i4 == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) {
        cout << n7 << " is a prime number." << endl;
    } else {
        cout << n7 << " is not a prime number." << endl;
    }

    // --- FIBONACCI SERIES ---
    int n8, prev = 0, next = 1, sum2 = 0;
    cout << "Enter the limit for Fibonacci series:" << endl;
    cin >> n8;
    cout << prev << " " << next << " ";
    while (true) {
        sum2 = prev + next;
        if (sum2 > n8) {
            break;
        }
        cout << sum2 << " ";
        prev = next;
        next = sum2;
    }
    cout << endl;

    // --- REVERSE OF A NUMBER ---
    int n9, b1 = 0, a1;
    cout << "Enter an integer to reverse:" << endl;
    cin >> n9;
    while (n9 > 0) {
        a1 = n9 % 10;
        n9 /= 10;
        b1 = b1 * 10 + a1;
    }
    cout << "The reverse of the number is: " << b1 << endl;

    return 0;
}