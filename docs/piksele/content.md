## Wstęp
W pliku [piksele.txt](https://github.com/pawelmalak/zadania-maturalne/blob/master/Dane/piksele.txt) znajduje się 200 wierszy. Każdy wiersz zawiera 320 liczb naturalnych z przedziału od 0 do 255, oddzielonych znakami pojedynczego odstępu (spacjami). Przedstawiają one jasności kolejnych pikseli czarno-białego obrazu o wymiarach 320 na 200 pikseli (od 0 – czarny do 255 – biały). Napisz program(y), który(e) da(dzą) odpowiedzi do poniższych zadań. Odpowiedzi zapisz w pliku wyniki.txt, a każdą odpowiedź poprzedź numerem oznaczającym odpowiednie zadanie.


### Zadanie 1.1
Podaj jasność najjaśniejszego i jasność najciemniejszego piksela.

### Zadanie 1.2
Podaj, ile wynosi najmniejsza liczba wierszy, które należy usunąć, żeby obraz miał pionową oś symetrii.  Obraz  ma  pionową oś  symetrii,  jeśli  w  każdym  wierszu  i-ty  piksel  od  lewej  strony  przyjmuje tę samą wartość, co i-ty piksel od prawej strony, dla dowolnego 1 ≤i ≤320.

### Zadanie 1.3
Sąsiednie  piksele  to  takie,  które  leżą  obok  siebie  w  tym  samym  wierszu lub  w  tej  samej  kolumnie.  Dwa  sąsiednie  piksele  nazywamy  kontrastującymi, jeśli  ich  wartości  różnią  się o więcej niż 128. Podaj liczbę wszystkich takich pikseli, dla których istnieje przynajmniej jeden kontrastujący z nim sąsiedni piksel.

### Zadanie 1.4
Podaj długość najdłuższej linii pionowej (czyli ciągu kolejnych pikseli w tej samej kolumnie obrazka), złożonej z pikseli tej samej jasności.

---

## Rozwiązanie

```cpp
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
  // Otwarcie pliku z danymi
  fstream plik;
  plik.open("../../dane/piksele.txt", ios::in);

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

```

---

## Wyniki

> Zadanie 1.1 - 221 i 7
> 
> Zadanie 1.2 - 149
>
> Zadanie 1.3 - 753
>
> Zadanie 1.4 - 5