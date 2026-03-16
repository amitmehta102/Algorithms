#include <iostream>
using namespace std;


//PROCEDURE -> NO RETURN VALUE
//FUNCTION -> RETURNS A VALUE
/*
    PROCEDURE sum(a,b)
        INTEGER a,b
        PRINT a+b
    END PROCEDURE

    FUNCTION sum(a,b)
        INTEGER a,b
        RETURN a+b
    END FUNCTION
*/

// Example of a function that adds two integers and returns the result
int add(int a, int b) {
    return a + b;
}

//AREA OF A CIRCLE
/*
    FUNCTION areaOfCircle(radius: REAL) : REAL
        REAL radius
        RETURN 3.14 * radius * radius
    END FUNCTION

    PROCEDURE areaOfCircle(radius: REAL)
        REAL radius
        PRINT 3.14 * radius * radius
    END PROCEDURE
*/
double areaOfCircle(float radius) {
    return 3.14f * radius * radius;
}
void areaOfCircleProcedure(float radius) {
    cout << "Area of the circle is: " << (3.14f * radius * radius) << endl;
}

//AREA OF A TRIANGLE
/*
    FUNCTION areaOfTriangle(base: REAL, height: REAL) : REAL
        REAL base, height
        RETURN 0.5 * base * height
    END FUNCTION

    PROCEDURE areaOfTriangle(base: REAL, height: REAL)
        REAL base, height
        PRINT 0.5 * base * height
    END PROCEDURE
*/
double areaOfTriangle(float base, float height) {
    return 0.5f * base * height;
}
void areaOfTriangleProcedure(float base, float height) {
    cout << "Area of the triangle is: " << (0.5f * base * height) << endl;
}

// Q1: ---------------------------------
// Max Of Two Integers
/*
    FUNCTION maxOfTwo(a: INTEGER, b: INTEGER) : INTEGER
        INTEGER a, b
        IF a > b THEN
            RETURN a
        ELSE
            RETURN b
        ENDIF
    END FUNCTION

    PROCEDURE maxOfTwo(a: INTEGER, b: INTEGER)
        INTEGER a, b
        IF a > b THEN
            PRINT a
        ELSE
            PRINT b
        ENDIF
    END PROCEDURE
*/
int maxOfTwo(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
void maxOfTwoProcedure(int a, int b) {
    if (a > b) {
        cout << a << endl;
    } else {
        cout << b << endl;
    }
}

// Q2: ---------------------------------
// Absolute Value of an Integer
/*
    FUNCTION absValue(x: INTEGER) : INTEGER
        INTEGER x
        IF x < 0 THEN
            RETURN -x
        ELSE
            RETURN x
        ENDIF
    END FUNCTION

    CALL absValue(-5) -> RETURNS 5
    CALL absValue(10) -> RETURNS 10

    PROCEDURE absValue(x: INTEGER)
        INTEGER x
        IF x < 0 THEN
            PRINT -x
        ELSE
            PRINT x
        ENDIF
    END PROCEDURE

    CALL absValue(-5) -> RETURNS 5
    CALL absValue(10) -> RETURNS 10
*/
int absValue(int x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}
void absValueProcedure(int x) {
    if (x < 0) {
        cout << -x << endl;
    } else {
        cout << x << endl;
    }
}

// Q3: ---------------------------------
// Factorial of a Non-negative Integer
/*
    FUNCTION factorial(n: INTEGER) : INTEGER
        DECLARE n : INTEGER
        SET n := 1
        FOR i := 1 TO n
            n = n * i
        END FOR
        RETURN n
    END FUNCTION

    CALL factorial(5) -> RETURNS 120

    PROCEDURE factorial(n: INTEGER)
        DECLARE n : INTEGER
        SET n := 1
        FOR i := 1 TO n
            n = n * i
        END FOR
        PRINT n
    END PROCEDURE
    
*/
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Q4: ---------------------------------
/*
    Called with a = 9, b =7
    INTEGER funn (INTEGER a, INTEGER b)
        DECLARE c: INTEGER
        SET c := 2
        b := b MOD c
        a := a MOD c
        RETURN a + b
    END FUNCTION
*/
int funn(int a, int b) {
    int c = 2;
    b = b % c;
    a = a % c;
    return a + b;
}

// Q5: ---------------------------------
/*
    Called with a = 9, b =7, c = 20
    INTEGER funn (INTEGER a, INTEGER b, INTEGER c)
        IF ((a + c) < (b - a)) THEN
            c := 4 + b
            b := (c + c) + b
        ELSE
            c := (a + 3) ^ a
            c := (10 & 8) + b  
        ENDIF
        RETURN a + b + c
    END FUNCTION
*/
int funn(int a, int b, int c) {
    if ((a + c) < (b - a)) {
        c = 4 + b;
        b = (c + c) + b;
    } else {
        c = (a + 3) ^ a;
        c = (10 & 8) + b;
    }
    return a + b + c;
}

// Q6: ---------------------------------
/*
    Called with a = 6, b = 9, c = 2
    INTEGER funn (INTEGER a, INTEGER b, INTEGER c)
        FOR each c from 4 to 8
            a := (a + 11) + b
            a := (c + 3) + b
        END FOR
        b := (5 + 10) + a
        a := (10 + 8) + a
        FOR each c from 2 to 5
            a := (10 + 2) & a
            b := (3 + 4) + a
        END FOR
        RETURN a + b
    END FUNCTION
*/
int funn(int a, int b, int c) {
    for (c = 4; c <= 8; c++) {
        a = (a + 11) + b;
        a = (c + 3) + b;
    }
    b = (5 + 10) + a;
    a = (10 + 8) + a;
    for (c = 2; c <= 5; c++) {
        a = (10 + 2) & a;
        b = (3 + 4) + a;
    }
    return a + b;
}

// Q7: -----------------------------
// Sum Of Series 1,2,....,n
/*
    FUNCTION sumOfSeries(n: INTEGER) : INTEGER
        DECLARE sum : INTEGER
        sum = 0
        FOR i := 1 TO n
            sum = sum + i
        END FOR
        RETURN sum
    END FUNCTION

    CALL sumOfSeries(5) -> RETURNS 15
*/
int sumOfSeries1(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// Q8: ---------------------------------
// Sum Of Series 1/1, 1/2, 1/3, ..., 1/n
/*
    FUNCTION sumOfSeries(n: INTEGER) : REAL
        DECLARE sum : REAL
        sum = 0.0
        FOR i := 1 TO n
            sum = sum + (1.0 / i)
        END FOR
        RETURN sum
    END FUNCTION

    CALL sumOfSeries(5) -> RETURNS 2.28333
*/
double sumOfSeries2(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (1.0 / i);
    }
    return sum;
}

// Q9: ---------------------------------
// Reverse of a Number
/*
    FUNCTION reverseNumber(n: INTEGER) : INTEGER
        DECLARE reversed : INTEGER
        SET reversed = 0
        WHILE n > 0
            reversed = (reversed * 10) + (n % 10)
            n = n / 10
        END WHILE
        RETURN reversed
    END FUNCTION

    CALL reverseNumber(12345) -> RETURNS 54321
*/
int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = (reversed * 10) + (n % 10);
        n = n / 10;
    }
    return reversed;
}

// Q10: ---------------------------------
// Palindrome Check
/*
    FUNCTION isPalindrome(n: INTEGER) : BOOLEAN
        DECLARE reversed : INTEGER
        SET reversed = 0
        DECLARE original : INTEGER
        SET original = n
        WHILE n > 0
            reversed = (reversed * 10) + (n % 10)
            n = n / 10
        END WHILE
        RETURN (original == reversed)
    END FUNCTION

    CALL isPalindrome(12321) -> RETURNS TRUE
    CALL isPalindrome(12345) -> RETURNS FALSE
*/
bool isPalindrome(int n) {
    int reversed = 0;
    int original = n;
    while (n > 0) {
        reversed = (reversed * 10) + (n % 10);
        n = n / 10;
    }
    return (original == reversed);
}

int main(){
        // Calling all functions sequentially
        cout << "Max of 10 and 20: " << maxOfTwo(10, 20) << endl;
        cout << "Absolute value of -5: " << absValue(-5) << endl;
        cout << "Factorial of 5: " << factorial(5) << endl;
        cout << "Result of funn(9, 7, 20): " << funn(9, 7, 20) << endl;
        cout << "Result of funn(6, 9, 2): " << funn(6, 9, 2) << endl;
        cout << "Sum of series 1 to 5: " << sumOfSeries1(5) << endl;
        cout << "Sum of series 1/1 to 1/5: " << sumOfSeries2(5) << endl;
        cout << "Reverse of 12345: " << reverseNumber(12345) << endl;
        cout << "Is 12321 a palindrome? " << (isPalindrome(12321) ? "Yes" : "No") << endl;
        cout << "Is 12345 a palindrome? " << (isPalindrome(12345) ? "Yes" : "No") << endl;
    
        return 0;
}