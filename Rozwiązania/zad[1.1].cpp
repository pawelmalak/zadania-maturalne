#include <iostream>
#include <fstream>

using namespace std;

int main() {
  fstream plik;
  plik.open("../dane/dane1.txt", ios::in);

  if (plik.good() != true) {
    cout << "Nie znaleziono pliku";
    return 0;
  }
  else {
    int kolor,
        najjasniejszy = 0,
        najciemniejszy = 255;

    while (plik >> kolor) {
      najjasniejszy = (kolor > najjasniejszy) ? kolor : najjasniejszy;
      najciemniejszy = (kolor < najciemniejszy) ? kolor : najciemniejszy;
    }

    cout << "Najjasniejszy: " << najjasniejszy << "  Najciemniejszy: " << najciemniejszy;
  }

  plik.close();


  return 0;
}