#include <iostream>
using namespace std;

// Q1:--------------
void solveBitwiseQ1() {
    /*
        DECLARE a : INT
        DECLARE b : INT
        DECLARE c : INT

        SET c:= 8 , b:= 2
        a = c/b
        c = b >> a
        c = b << a
        print(c)
    */
    int a;
    int b;
    int c;

    c = 8;
    b = 2;
    a = c / b;     // a = 4
    c = b >> a;    // 2 >> 4
    c = b << a;    // 2 << 4
    
    cout << c << endl;
}

// Q2:- --------------------------------------------------
void solveArithmeticQ2() {
    /* DECLARE a : INT
        DECLARE b : INT
        DECLARE c : INT

        SET b:= 40 , a:= 20, c:= 20
        a = a+c
        c = c+a
        a = a+c
        c = c+a
        print a+b+c
    */
    int a1;
    int b1;
    int c1;

    b1 = 40;
    a1 = 20;
    c1 = 20;

    a1 = a1 + c1;  // a1 = 40
    c1 = c1 + a1;  // c1 = 60
    a1 = a1 + c1;  // a1 = 100
    c1 = c1 + a1;  // c1 = 160

    cout << (a1 + b1 + c1) << endl;
}

int main() {
    solveBitwiseQ1();
    solveArithmeticQ2();
    
    return 0;
}