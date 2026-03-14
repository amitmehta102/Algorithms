#include <iostream>
#include <string>

using namespace std;

// Function for UID - pass matching code
void checkLogin() {
    /*
        DECLARE uid : STRING
        DECLARE pass : STRING
        READ uid
        READ pass
        IF uid == "admin" AND pass == "admin123" THEN
            PRINT "Login successful"
        ELSE
            PRINT "Login failed"
        END IF 
    */
    string uid;
    string pass;

    cout << "Enter UID:" << endl;
    cin >> uid;
    cout << "Enter Password:" << endl;
    cin >> pass;

    // In C++, we can use == to compare strings directly
    if (uid == "admin" && pass == "admin123") {
        cout << "Login successful" << endl;
    } else {
        cout << "Login failed" << endl;
    }
}

// Function for Marks grading System
void calculateGrade() {
    /* DECLARE CN : INTEGER
         DECLARE CD : INTEGER
         DECLARE CP : INTEGER
         DECALRE DBMS : INTEGER
         DECLARE ML : INTEGER

         READ CN,CD,CP,DBMS,ML
         DECLARE per : REAL
         per = (CN + CD + CP + DBMS + ML) / 5
            IF per >= 90 THEN
                PRINT "Grade A+"
            ELSE IF per >= 80 THEN
                PRINT "Grade A"
            ELSE IF per >= 70 THEN
                PRINT "Grade B+"
            ELSE IF per >= 60 THEN
                PRINT "Grade B"
            Else IF per >= 50 THEN
                PRINT "Grade C"
            ELSE 
                PRINT "Grade F"
            END IF
    */
    int CN, CD, CP, DBMS, ML;

    cout << "Enter marks for CN:" << endl;
    cin >> CN;
    cout << "Enter marks for CD:" << endl;
    cin >> CD;
    cout << "Enter marks for CP:" << endl;
    cin >> CP;
    cout << "Enter marks for DBMS:" << endl;
    cin >> DBMS;
    cout << "Enter marks for ML:" << endl;
    cin >> ML;

    // Using 5.0 ensures floating-point division
    double per = (CN + CD + CP + DBMS + ML) / 5.0;

    if (per >= 90) {
        cout << "Grade A+" << endl;
    } else if (per >= 80) {
        cout << "Grade A" << endl;
    } else if (per >= 70) {
        cout << "Grade B+" << endl;
    } else if (per >= 60) {
        cout << "Grade B" << endl;
    } else if (per >= 50) {
        cout << "Grade C" << endl;
    } else {
        cout << "Grade F" << endl;
    }
}

int main() {
    // Calling the login check logic
    checkLogin();

    cout << "--------------------------------" << endl;

    // Calling the grading system logic
    calculateGrade();

    return 0;
}