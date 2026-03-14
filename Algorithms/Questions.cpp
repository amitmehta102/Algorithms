#include <iostream>

using namespace std;

// Q1: ---------------------------------
void solveQuestion1() {
    /*
        INTEGER p,q,r
        SET p:= 1, q:= 5, r:= 7
        r = q+p

        if((3+p)<(q+3))
                if((r+q+8)<(q+p+r))
                      r = (3+30)r
                endif
                r = (q + 1) + q

        ELSE
            if((r+q)<(q+r))
                q = 12 + q
            else 
                r = q + p 
            endif
            r = (p+q)+r
        ENDIF
        r = r+r
        print p+q+r
    */
    int p = 1, q = 5, r = 7;
    r = q + p;

    if ((3 + p) < (q + 3)) {
        if ((r + q + 8) < (q + p + r)) {
            r = (3 + 30) * r;
        }
        r = (q + 1) + q;
    } else {
        if ((r + q) < (q + r)) {
            q = 12 + q;
        } else {
            r = q + p;
        }
        r = (p + q) + r;
    }
    r = r + r;
    cout << "Q1 Result: " << (p + q + r) << endl;
}

// Q2: ---------------------------------
void solveQuestion2() {
    /*
        INTEGER a,b,c
        SET a:= 1, b:= 5, c:= 7
        if((c+b)<(a+c))
             b = a+b
        else 
            if((c+9+b)<(6+c))
                 c = (3+8)+c
            endif
        endif 
        
        print a+b+c
    */
    int a = 1, b = 5, c = 7;
    if ((c + b) < (a + c)) {
        b = a + b;
    } else {
        if ((c + 9 + b) < (6 + c)) {
            c = (3 + 8) + c;
        }
    }
    cout << "Q2 Result: " << (a + b + c) << endl;
}

// Q3: -------------
void solveQuestion3() {
    /* INETGER p,q,r
        SET p:= 4, q:= 2, r:= 8
        for(each r from 5 to 6)
            p = (r+r) ^ r
            q = (8+3)+p
        end for
        for(each r from 5 to 8)
            p = 4+r
            p = 1 + q
        end for
        print p+q+r
    */
    int p1 = 4, q1 = 2, r1 = 8;
    for (r1 = 5; r1 <= 6; r1++) {
        p1 = (r1 + r1) ^ r1;
        q1 = (8 + 3) + p1;
    }
    for (r1 = 5; r1 <= 8; r1++) {
        p1 = 4 + r1;
        p1 = 1 + q1;
    }
    cout << "Q3 Result: " << (p1 + q1 + r1) << endl;
}

// Q4: -----------------------------
void solveQuestion4() {
    /* INTEGER a,b,c
        SET b:= 4, c:= 5
        for each a from 2 to 4 loop
            print c 
            b:=b-1
            c:=c+b
        next for        
    */
    int a2, b2 = 4, c2 = 5;
    cout << "Q4 sequence: ";
    for (a2 = 2; a2 <= 4; a2++) {
        cout << c2 << " ";
        b2 = b2 - 1;
        c2 = c2 + b2;
    }
    cout << endl;
}

int main() {
    solveQuestion1();
    solveQuestion2();
    solveQuestion3();
    solveQuestion4();
    return 0;
}