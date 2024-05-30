#include <iostream>
#include <conio.h>

using namespace std;

class Drib {
    int numerator;
    int denominator;
public:
    Drib(int n, int d) {
        numerator = n;
        denominator = d;
    }
    void setNumerator(int n) {
        numerator = n;
    }
    void setDenominator(int d) {
        denominator = d;
    }
    void print() {
        cout << numerator << endl;
        cout << "===" << endl;
        cout << denominator << endl;
    }
    int greatest_common_divisor(int a, int b) {
        if (a == 0) {
            return b;
        }
        return greatest_common_divisor(b % a, a);
    }
    void reduce() {
        int g = greatest_common_divisor(numerator, denominator);
        numerator /= g;
        denominator /= g;
    }
};

int main() {
    int n, d;
    char ch;
    do {
        cout << "Enter the numerator: ";
        cin >> n;
        cout << "Enter the denominator: ";
        cin >> d;
        Drib d1(n, d);
        d1.print();
        d1.reduce();
        cout << "Reduced form: " << endl;
        d1.print();
        cout << "Press ESC to exit or any other key to continue..." << endl;
        ch = getch();
    } while (ch != 27);
    return 0;
}
