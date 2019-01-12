#include <iostream>
#include <fstream>

using namespace std;

int main() {

  fstream plik;
  plik.open("../../dane/sygnaly.txt", ios::in);

  if (plik.good() != true) {
    cout << "Nie znaleziono pliku";
    return 0;
  }
  else {
    string slowa[1000];

    for (int i = 0; i < 1000; i++) {
      plik >> slowa[i];
    }

    for (int j = 39; j < 1000; j += 40) {
      cout << slowa[j][9];
    }

  }

  plik.close();

  return 0;
}