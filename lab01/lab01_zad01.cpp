#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    
    cout << "hello world" << endl;

    string imie;

    cout << "Podaj imie: ";
    cin >> imie;

    cout << "Siema " << imie << endl;

    int a;
    int b;
    cout << "Podaj a: ";
    cout << "Podaj b: ";
    cin >> a >> b;

    

    float P;
    int T;
    float R;
    cout << fixed << setprecision(2);

    cout << "Podaj T: " << endl;
    cin >> T;
    cout << "Podaj P: " << endl;
    cin >> P;
    cout << "Podaj R: " << endl;
    cin >> R;

    float I = (P * T * R)/100;
    cout << "Wynik rzeczywisty: " << I;
    cout << "Wynik calkowity: " << static_cast<int>(I) << endl;

    
    return 0;
}