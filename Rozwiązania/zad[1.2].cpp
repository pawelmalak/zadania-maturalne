#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Otwarcie pliku z danymi 
  fstream plik;
  plik.open("../dane/dane1.txt", ios::in);

  // Sprawdzanie czy plik istnieje
  if (plik.good() != true) {
    cout << "Nie znaleziono pliku" << endl;
    return 0;
  }
  else {
    int kolory[320],
        iloscWierszy = 0,
        i = 0;

    // Wykonywanie pętli dopóki wszystkie piksele z danego wiersza nie zostaną zapisane w tablicy
    while (plik >> kolory[i]) {
      // Sprawdzanie czy w tablicy znajduje się 320 elementów => cały wiersz
      if (i == 319) {
        // Pętla po każdym pikselu z danego wiersza
        for (int j = 0; j < 320; j++) {
          // Jeśli n-ty z kolei piksel od lewej strony nie jest równy n-temu pikselowi z prawej strony następuje zwiększenie licznika i przerwanie pętli
          if (kolory[j] != kolory[319 - j]) {
            iloscWierszy++;
            break;
          }
        }
        // Przejście do następnego wiersza
        i = 0;
      }
      // Jeśli w tablicy jest mniej niż 320 elementów zwiększamy licznik
      else {
        i++;
      }
    }

    cout << iloscWierszy;
  }

  // Zamknięcie pliku
  plik.close();

  return 0;
}