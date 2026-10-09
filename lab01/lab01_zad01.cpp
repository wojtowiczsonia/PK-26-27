#include <iostream>
<<<<<<< HEAD
#include <string>
#include <iomanip>
=======
>>>>>>> 725842d90f48eb68fa79658882f9dae5d67bb159

using namespace std;

int main() {
<<<<<<< HEAD
    
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

    
=======

    /*
    cout służy do wyświetlania danych na standardowym wyjściu,
    czyli w naszym przypadku w terminalu.

    Tekst umieszczamy w cudzysłowie.

    endl kończy bieżącą linię i przechodzi do następnej.
    */
    cout << "Hello world!" << endl;

    /*
    return 0 oznacza poprawne zakończenie programu.

    Wykonywanie programu rozpoczyna się od funkcji main()
    i kończy po wykonaniu jej instrukcji.
    */
>>>>>>> 725842d90f48eb68fa79658882f9dae5d67bb159
    return 0;
}