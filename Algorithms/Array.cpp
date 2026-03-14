#include <iostream>

using namespace std;

// Array of integers
/*
 * DECLARE a : ARRAY[0:4] OF INTEGER
 * FOR i:= 0 TO 4
 * READ a[i]
 * END FOR
 * FOR i:= 0 TO 4
 * PRINT a[i]
 * END FOR
 */
void basicArrayIO() {
    int a[5];
    cout << "\n--- Basic Array I/O ---\n";
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    cout << "The integers you entered are:\n";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << "\n";
    }
}


// Sum of elements in an array
/*
 * DECLARE a : ARRAY[0:4] OF INTEGER
 * DECLARE sum : INTEGER
 * sum = 0
 * FOR i:= 0 TO 4
 * READ a[i]
 * END FOR
 * FOR i:= 0 TO 4
 * sum = sum + a[i]
 * END FOR
 * PRINT sum
 */
void sumOfArray() {
    int arr[5];
    int sum = 0;
    cout << "\n--- Sum of Elements in an Array ---\n";
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << "The sum of the integers is: " << sum << "\n";
}


// Max Value in an Array
/*
 * DECLARE a : ARRAY[0:4] OF INTEGER
 * DECLARE max : INTEGER
 * FOR i:= 0 TO 4
 * READ a[i]
 * END FOR
 * max = a[0]
 * FOR i:= 1 TO 4
 * IF a[i] > max THEN
 * max = a[i]
 * END IF
 * END FOR
 * PRINT max
 */
void maxValueInArray() {
    int arr2[5];
    cout << "\n--- Max Value in an Array ---\n";
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr2[i];
    }
    int max_val = arr2[0];
    for (int i = 1; i < 5; i++) {
        if (arr2[i] > max_val) {
            max_val = arr2[i];
        }
    }
    cout << "The maximum value in the array is: " << max_val << "\n";
}


// MULTI-DIMENSIONAL ARRAYS
/*
 * DECLARE a : ARRAY[2][2] OF INTEGER
 * FOR r:= 0 TO 1
 * FOR c:= 0 TO 1
 * READ a[r][c]
 * END FOR
 * END FOR
 * FOR r:= 0 TO 1
 * FOR c:= 0 TO 1
 * PRINT a[r][c]
 * END FOR
 * END FOR
 */
void multiDimensionalArrayIO() {
    int a2[2][2];
    cout << "\n--- Multi-Dimensional Array I/O ---\n";
    cout << "Enter 4 integers for a 2x2 array:\n";
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 2; c++) {
            cin >> a2[r][c];
        }
    }
    cout << "The 2x2 array you entered is:\n";
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 2; c++) {
            cout << a2[r][c] << " ";
        }
        cout << "\n";
    }
}


// Count how many values are even / odd in 3x3 array
/*
 * DECLARE a : ARRAY[2][2] OF INTEGER
 * DECLARE evenCount : INTEGER
 * DECLARE oddCount : INTEGER
 * evenCount = 0
 * oddCount = 0
 * FOR r:= 0 TO 2
 * FOR c:= 0 TO 2
 * READ a[r][c]
 * END FOR
 * END FOR
 * FOR r:= 0 TO 2
 * FOR c:= 0 TO 2
 * IF a[r][c] MOD 2 == 0 THEN
 * INCREMENT evenCount
 * ELSE
 * INCREMENT oddCount 
 * END IF
 * END FOR
 * END FOR
 * PRINT evenCount
 * PRINT oddCount
 */
void countEvenOddIn3x3() {
    int a3[3][3];
    int evenCount = 0;
    int oddCount = 0;
    cout << "\n--- Count Even/Odd in 3x3 Array ---\n";
    cout << "Enter 9 integers for a 3x3 array:\n";
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cin >> a3[r][c];
        }
    }
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            if (a3[r][c] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }
    cout << "Number of even values: " << evenCount << "\n";
    cout << "Number of odd values: " << oddCount << "\n";
}


// Addition of two 3x3 arrays
/*
 * DECLARE x : ARRAY[2][2] OF INTEGER
 * DECLARE y : ARRAY[2][2] OF INTEGER
 * DECLARE z : ARRAY[2][2] OF INTEGER
 * FOR r:= 0 TO 2
 * FOR c:= 0 TO 2
 * READ x[r][c]
 * READ y[r][c]
 * END FOR
 * END FOR
 * FOR r:= 0 TO 2
 * FOR c:= 0 TO 2
 * z[r][c] = x[r][c] + y[r][c]
 * END FOR
 * END FOR
 * FOR r:= 0 TO 2
 * FOR c:= 0 TO 2
 * PRINT z[r][c]
 * END FOR
 * END FOR
 */
void addTwo3x3Arrays() {
    int x[3][3];
    int y[3][3];
    int z[3][3];
    
    cout << "\n--- Addition of Two 3x3 Arrays ---\n";
    cout << "Enter 9 integers for the first 3x3 array:\n";
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cin >> x[r][c];
        }
    }
    
    cout << "Enter 9 integers for the second 3x3 array:\n";
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cin >> y[r][c];
        }
    }
    
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            z[r][c] = x[r][c] + y[r][c];
        }
    }
    
    cout << "The resulting 3x3 array after addition is:\n";
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cout << z[r][c] << " ";
        }
        cout << "\n";
    }
}


int main() {
    // Calling all functions sequentially
    basicArrayIO();
    sumOfArray();
    maxValueInArray();
    multiDimensionalArrayIO();
    countEvenOddIn3x3();
    addTwo3x3Arrays();
    
    return 0;
}