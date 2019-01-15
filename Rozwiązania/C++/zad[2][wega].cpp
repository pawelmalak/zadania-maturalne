#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() {

  string SLOWA[1000];

  // Otwarcie pliku z danymi
  fstream plik;
    plik.open("../../Dane/sygnaly.txt", ios::in);
  // Utworzenie pliku z wynikami
  fstream wyniki;
    wyniki.open("Wyniki/wyniki[2][wega].txt", ios::out);

  // Sprawdzenie czy plik z danymi istnieje i został pomyślnie wczytany
  if (plik.good() != true) {
    cout << "Nie znaleziono pliku";
  }
  else {

    // Pobranie danych i zapisanie ich w tablicy
    for (int i = 0; i < 1000; i++) {
      plik >> SLOWA[i];
    }


    // Zadanie 1
    wyniki << "1) \n";

    for (int i = 0; i < 1000; i++) {
      // Wybieramy tylko co czterdzieste słowo, mając na uwadze indeksowanie tablic od 0
      if (i % 40 == 39) {
        wyniki << SLOWA[i][9];
      }
    }


    // Zadanie 2
    wyniki << "\n\n2) \n";

    int ktory = 0,
        ile = 0;

    for (int s = 0; s < 1000; s++) {
      int ileTmp = 0;
      for (int a = 65; a <= 90; a++) {
        for (int l = 0; l < SLOWA[s].length(); l++) {
          if (SLOWA[s][l] == a) {
            ileTmp++;
            if (ileTmp > ile) {
              ile = ileTmp;
              ktory = s;
            }
            break;
          }
        }
      }
    }

    wyniki << SLOWA[ktory] << "   " << ile;


  // Zadanie 3
  wyniki << "\n\n3) \n";

  for (int i = 0; i < 1000; i++) {
    for (int j = 0; j < SLOWA[i].length() - 1; j++) {
      if (abs(SLOWA[i][j] - SLOWA[i][j + 1]) > 10) {
        break;
      }
      else {
        if (j == SLOWA[i].length() - 2) {
          wyniki << SLOWA[i] << "\n";
        }
        else {
          continue;
        }
      }
      }
    }
  }

  plik.close();
  wyniki.close();


  return 0;
}
