#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void przerywnik() {
  cout << "-------------" << endl;
}

int main() {

  fstream dane;
    dane.open("Dane/liczby.txt", ios::in);
  fstream wyniki;
    wyniki.open("wyniki.txt", ios::out);
  
  string LICZBY[1000] = {};

  for (int i = 0; i < 1000; i++) {
    dane >> LICZBY[i];
  }

  // Zadanie 4.1
  int ile;

  for (int i = 0; i < 1000; i++) {
    int zera = 0, jedynki = 0;
    
    for (int j = 0; j < LICZBY[i].length(); j++) {
      if (LICZBY[i][j] == '0') zera++;
      else jedynki++;
    }

    if (zera > jedynki) ile++;
  }

  cout << ile << " liczb" << endl;
  wyniki << "Zadanie 4.1\n" << ile << " liczb/y\n";
  przerywnik();

  // Zadanie 4.2
  int dwa = 0, osiem = 0;

  for (int i = 0; i < 1000; i++) {
    if (LICZBY[i][LICZBY[i].length() - 1] == '0') dwa++;

    if (LICZBY[i][LICZBY[i].length() - 1] == '0' &&
        LICZBY[i][LICZBY[i].length() - 2] == '0' &&
        LICZBY[i][LICZBY[i].length() - 3] == '0') osiem++;
  }

  cout << dwa << " Podzielnych przez 2" << endl;
  cout << osiem << " Podzielnych przez 8" << endl;
  wyniki << "\nZadanie 4.2\n" << dwa << " Podzielnych przez 2\n" << osiem << " Podzielnych przez 8\n";
  przerywnik();

  // Zadanie 4.3
  int maxL = 0;
  int maxI = 0;
  int minL = 250;
  int minI = 0;

  for (int i = 0; i < 1000; i++) {
    int pomL = LICZBY[i].length();

    if (pomL > maxL) {
      maxL = pomL;
      maxI = i;
    }
    else if (pomL == maxL) {
      if (LICZBY[i] > LICZBY[maxI]) {
        maxI = i;
      }
    }

    if (pomL < minL) {
      minL = pomL;
      minI = i;
    }
    else if (pomL == minL) {
      if (LICZBY[i] < LICZBY[minI]) {
        minI = i;
      }
    }
  }

  cout << "Najwieksza liczba znajduje sie w wierszu " << maxI + 1 << endl;
  cout << "Najmniejsza liczba znajduje sie w wierszu " << minI + 1;
  wyniki << "\nZadanie 4.3\n" << "Najmniejsza liczba znajduje sie w wierszu " << minI + 1 << "\nNajwieksza liczba znajduje sie w wierszu " << maxI + 1;

  dane.close();
  wyniki.close();

  return 0;
}