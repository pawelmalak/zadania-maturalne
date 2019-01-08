#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
  // Otwarcie pliku z danymi
  fstream plik;
  plik.open("../dane/dane1.txt", ios::in);

  // Sprawdzenie czy plik istnieje
  if (plik.good() != true) {
    cout << "Nie znaleziono pliku" << endl;
    return 0;
  }
  else {
    int piksele[200][320],
        najdluzszaLinia = 1,
        tmp = 1,
        poprzedni = 0;

    // Zapisanie każdego piksela w tablicy dwuwymiarowej
    for (int i = 0; i < 200; i++) {
      for (int j = 0; j < 320; j++) {
        plik >> piksele[i][j];
      }
    }

    // Pętla po kolumnach tabeli
    for (int y = 0; y < 320; y++) {
      for (int x = 0; x < 199; x++) {
        // Przypisanie pierwszego piksela w kolumnie. Reset najdłuższej, chwilowej linii
        if (x == 0) {
          poprzedni = piksele[x][y];
          tmp = 1;
        }
        else {
          // Jeśli obecny piksel równa się poprzedniemu, zwiększ najdłuższą, chwilową linię o 1
          if (piksele[x][y] == poprzedni) {
            tmp++;
          }
          else {
            // Jeśli chwilowa linia jest większa od obecnie najdłuższej => przypisz nową wartość
            najdluzszaLinia = (tmp > najdluzszaLinia) ? tmp : najdluzszaLinia;
          }
        }
      }
    }

    cout << "Długosc najdluzszej linii pionowej wynosi: " << najdluzszaLinia;

  }

  // Zamknięcie pliku
  plik.close();

  return 0;
}
