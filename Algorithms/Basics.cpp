#include <iostream>
using namespace std;

int main() {
    /*
        PSEUDOCODE:
        1. DECLARE length, width, area : INTEGER
        2. PRINT "Enter the length of the rectangle:"
        3. READ length
        4. PRINT "Enter the width of the rectangle:"
        5. READ width
        6. SET area = length * width
        7. PRINT "The area of the rectangle is: ", area
    */

    // C++ Implementation
    int length, width, area;

    cout << "Enter the length of the rectangle:" << endl;
    cin >> length;

    cout << "Enter the width of the rectangle:" << endl;
    cin >> width;

    // Calculation
    area = length * width;

    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}