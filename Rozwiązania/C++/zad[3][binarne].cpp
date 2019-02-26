#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  fstream plik;
  plik.open("../../Dane/liczby.txt", ios::in);

  if (plik.good() != true) {
    cout << "brak pliku";
  }
  else {

    int N = 1000;
    string LICZBY[N] = {};

    for (int i = 0; i < N; i++) {
      plik >> LICZBY[i];
    }

    // Zadanie 3.1
    int ileLiczb = 0;

    for (int i = 0; i < N; i++) {
      int ileJ = 0,
          ileZ = 0;

      for (int j = 0; j < LICZBY[i].length(); j++) {
        if (LICZBY[i][j] == '0') {
          ileZ++;
        }
        else {
          ileJ++;
        }
      }

      if (ileZ > ileJ) { ileLiczb++; }
    }

    cout << ileLiczb;

    // Zadanie 3.2
    for (int i = 0; i < N; i++) {
      cout << dec(LICZBY[i]);
    }

  }




  return 0;

}
