#include <iostream>
using namespace std;

// Function for searching a digit in a number
void searchDigit() {
    /* DECLARE n : INTEGER
        DECLARE a : INTEGER
        DECLARE d : INTEGER
        DECLARE found : BOOLEAN
        SET found := FALSE
        READ n
        READ d
        WHILE n > 0
            SET a := n MOD 10
            n := n / 10
            IF a = d THEN
                SET found := TRUE
                BREAK
            ENDIF
        ENDWHILE
        IF found THEN
            PRINT "Digit is present in the number"
        ELSE
            PRINT "Digit is not present in the number"
        ENDIF
    */
    int n, a, d;
    bool found = false;

    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "Enter a digit to search: " << endl;
    cin >> d;

    while (n > 0) {
        a = n % 10;
        n /= 10;
        if (a == d) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Digit is present in the number." << endl;
    } else {
        cout << "Digit is not present in the number." << endl;
    }
}

// Function for counting frequency of a digit in a number
void countFrequency() {
    /* DECLARE n : INTEGER
        DECLARE d : INTEGER
        DECLARE count : INTEGER
        SET count := 0
        READ n
        READ d
        WHILE n > 0
            IF n MOD 10 = d THEN
                SET count := count + 1
            ENDIF
            n := n / 10
        ENDWHILE
        PRINT "Frequency of digit ", d, " in the number ", n, " is ", count
    */
    int n2, d2, count = 0;

    cout << "Enter a number: " << endl;
    cin >> n2;
    cout << "Enter a digit to count frequency: " << endl;
    cin >> d2;

    while (n2 > 0) {
        if (n2 % 10 == d2) {
            count++;
        }
        n2 /= 10;
    }
    cout << "Frequency of digit " << d2 << " in the number is " << count << endl;
}

int main() {
    searchDigit();
    
    cout << "--------------------------------" << endl;
    
    countFrequency();

    return 0;
}