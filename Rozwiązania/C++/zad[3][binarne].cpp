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


    for (int i = 0; i < 1; i++) {
      cout << LICZBY[i][0] << endl;
      cout << LICZBY[i].length();
    }

  }




  return 0;

}
