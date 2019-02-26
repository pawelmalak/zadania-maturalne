#include <iostream>
#include <fstream>

using namespace std;

int main() {

  fstream plik;
  plik.open("../../Dane/liczby.txt", ios::in);

  if (plik.good() != true) {
    cout << "brak pliku";
  }
  else {

    string LICZBY[1000] = {};

    for (int i = 0; i < 1000; i++) {
      plik >> LICZBY[i];
    }



    cout << LICZBY[0];

  }




  return 0;

}
