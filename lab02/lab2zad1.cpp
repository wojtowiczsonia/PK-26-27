#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    
    char znak;

    cout << "Podaj znak: " << endl;
    cin >> znak;
    cout << "Znak: '" << znak << "'" << endl;
    
    int liczba = static_cast<int>(znak);
    
    cout << "Kod: " << liczba << " (" << showbase << hex << liczba << ")" << endl;

    return 0;
}
