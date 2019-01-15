#include <iostream>

using namespace std;

// Funkcja zwraca indeks szukanego elementu w tablicy, lub -1, jeśli element nie istnieje
int binary_search(int T[], int S, int L) {

  int start = 0,
      koniec = L - 1;

  while (start <= koniec) {
    int mid = (start + koniec) / 2;

    if (T[mid] == S) {
      return mid;
    }
    else {
      if (mid > S) {
        koniec = mid - 1;
      }
      else {
        start = mid + 1;
      }
    }
  }

  return -1;
}

int main()
{
  int tablica[] = {1,3,4,8,9,10,16,17,20,24,29,30};
  int szukana = 4;
  int len = sizeof(tablica) / sizeof(tablica[0]);

  cout << binary_search(tablica, szukana, len); // zwróci 2

  return 0;
}