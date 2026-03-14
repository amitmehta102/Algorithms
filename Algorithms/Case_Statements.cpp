#include <iostream>
using namespace std;

int main() {
    // CASE STATEMENTS 
/* DECLARE x : INTEGER
      READ x
      CASES OF x:
      1 : PRINT "One"
      2 : PRINT "Two"
      3 : PRINT "Three"
        
    OTHERWISE 
        PRINT "Invalid input"
    ENDCASE
*/
// Code snippet for CASE STATEMENTS

    int x;
    cout << "Enter an integer:" << endl;
    cin >> x;
    
    switch (x) {
        case 1:
            cout << "One" << endl;
            break;
        case 2:
            cout << "Two" << endl;
            break;
        case 3:
            cout << "Three" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }

// -------------------------------------------------------------------------------------
//        Example 2 
/*
          DECLARE x : INTEGER
          DECLARE a : INTEGER
          DECLARE b : INTEGER

          READ  a,b,x
          CASE OF x:
          1 : PRINT a+b 
          2 : PRINT a-b
          3 : PRINT a*b
          4 : PRINT a/b
           
        OTHERWISE
            PRINT "WRONG SELECTION"   
        ENDCASE
*/
// Code snippet for Example 2

    int a, b;
    cout << "Enter two integers:" << endl;
    cin >> a >> b;
    
    cout << "Enter an operation (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division):" << endl;
    cin >> x;
    
    switch (x) {
        case 1:
            cout << "Result: " << (a + b) << endl;
            break;
        case 2:
            cout << "Result: " << (a - b) << endl;
            break;
        case 3:
            cout << "Result: " << (a * b) << endl;
            break;
        case 4:
            if (b != 0) {
                cout << "Result: " << (a / b) << endl;
            } else {
                cout << "Cannot divide by zero" << endl;
            }
            break;
        default:
            cout << "WRONG SELECTION" << endl;
            break;
    }
    return 0;
}