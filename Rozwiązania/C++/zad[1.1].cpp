#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Otwarcie pliku z danymi
  fstream plik;
  plik.open("../../dane/piksele.txt", ios::in);

  // Sprawdzenie czy plik istnieje
  if (plik.good() != true) {
    cout << "Nie znaleziono pliku";
    return 0;
  }
  else {
    int kolor,
        najjasniejszy = 0,
        najciemniejszy = 255;

    // Wykonywanie pętli dopóki w pliku są dane
    while (plik >> kolor) {
      // Jeśli jasność piksela jest większa od obecnie najjaśniejszego to przypisujemy nową wartość
      najjasniejszy = (kolor > najjasniejszy) ? kolor : najjasniejszy;
      // Jeśli jasność piksela jest mniejsza od obecnie najciemniejszego to przypisujemy nową wartość
      najciemniejszy = (kolor < najciemniejszy) ? kolor : najciemniejszy;
    }

    cout << "Najjasniejszy: " << najjasniejszy << "  Najciemniejszy: " << najciemniejszy;
  }

  // Zamknięcie pliku
  plik.close();


  return 0;
}