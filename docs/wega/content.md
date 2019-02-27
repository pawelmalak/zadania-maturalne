## Wstęp
W ramach projektu WEGA naukowcom udało się odczytać sygnały radiowe pochodzące z przestrzeni kosmicznej. Po wstępnej obróbce zapisali je do pliku [sygnaly.txt](https://github.com/pawelmalak/zadania-maturalne/blob/master/Dane/sygnaly.txt). W pliku sygnaly.txt znajduje się 1000 wierszy. Każdy wiersz zawiera jedno niepuste słowo złożone z wielkich liter alfabetu angielskiego. Długość jednego słowa nie przekracza 100 znaków. Napisz program(y), który(e) da(dzą) odpowiedzi do poniższych zadań. Odpowiedzi zapisz w pliku wyniki.txt, a każdą odpowiedź poprzedź numerem oznaczającym odpowiednie zadanie.


### Zadanie 2.1
Naukowcy zauważyli, że po złączeniu dziesiątych liter co czterdziestego słowa (zaczynając od słowa czterdziestego) otrzymamy pewne przesłanie. Wypisz to przesłanie. Uwaga: Każde co czterdzieste słowo ma co najmniej 10 znaków.

### Zadanie 2.2
Znajdź słowo, w którym występuje największa liczba różnych liter. Wypisz to słowo i liczbę występujących w nim różnych liter. Jeśli słów o największej liczbie różnych liter jest więcej niż jedno, wypisz pierwsze z nich pojawiające się w pliku z danymi.

### Zadanie 2.3
W tym zadaniu rozważmy odległość liter w alfabecie – np. litery A i B są od siebie oddalone o 1, A i E o 4, F i D o 2, a każda litera od siebie samej jest oddalona o 0. Wypisz wszystkie słowa, w których każde dwie litery oddalone są od siebie w alfabecie co najwyżej o 10. Słowa wypisz w kolejności występowania w pliku sygnaly.txt, po jednym w wierszu. Na przykład CGECF jest takim słowem, ale ABEZA nie jest (odległość A – Z wynosi 25).


---

## Rozwiązanie

```cpp
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
```

---

## Wyniki

> Zadanie 2.1 ZAPISZODPOWIEDZIWPLIKUTXT
> 
> Zadanie 2.2 - SUOLDQWISCDRFLRWHZBNTMIAPHALMNCWHVGMXOZSQNXWXSFELZVTUTILXWKCTYBQYSUAKNYJKRXDJQYHXAQGWN 26
>
> Zadanie 1.3 - 753
>
> Zadanie 1.4 - 5



