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
        iloscKontrastujacych = 0,
        i = 0,
        j = 0;

    // Zapisanie każdego piksela w tablicy dwuwymiarowej
    while (plik >> piksele[i][j]) {
      j++;
      if (j == 319) {
        i++;
      }
    }

    for (int x = 0; x < 200; x++) {
      for (int y = 0; y < 320; y++) {

        // Sprawdzenie czy piksel nie jest pierwszym z prawej
        // Sprawdzenie czy różnica z prawym pikselem jest większa niż 128
        if (y < 319 && abs(piksele[x][y] - piksele[x][y + 1]) > 128) {
          iloscKontrastujacych++;
          continue;
        }

        // Sprawdzenie czy piksel nie jest pierwszym z lewej
        // Sprawdzenie czy różnica z lewym pikselem jest większa niż 128
        if (y > 0 && abs(piksele[x][y] - piksele[x][y - 1]) > 128) {
          iloscKontrastujacych++;
          continue;
        }

        // Sprawdzenie czy piksel nie jest pierwszym od dołu
        // Sprawdzenie czy różnica z dolnym pikselem jest większa niż 128
        if (x < 199 && abs(piksele[x][y] - piksele[x + 1][y]) > 128) {
          iloscKontrastujacych++;
          continue;
        }

        // Sprawdzenie czy piksel nie jest pierwszym od góry
        // Sprawdzenie czy różnica z górnym pikselem jest większa niż 128
        if (x > 0 && abs(piksele[x][y] - piksele[x - 1][y]) > 128) {
          iloscKontrastujacych++;
          continue;
        }
      }
    }

    cout << iloscKontrastujacych;
  }

  // Zamknięcie pliku
  plik.close();

  return 0;
}