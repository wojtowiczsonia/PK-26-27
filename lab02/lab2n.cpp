#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    
    int a = 10, b = 3;

  if (a < 100 && b % 2 != 0){
    cout << "Warunek nr 1" << endl;
  }
  else if (a % 2 == 0){
    cout << "Warunek nr 2" << endl;
  }
  else {
    cout << "Jestes w else!" << endl;
  }
    
    return 0;
}
