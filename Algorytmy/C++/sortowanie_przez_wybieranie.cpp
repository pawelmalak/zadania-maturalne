#include <iostream>

using namespace std;

void selection_sort(double T[], int S) {
  int min_index;
  double min_val;

  for (int i = 0; i < S - 1; i++) {
    min_index = i;
    for (int j = i + 1; j < S; j++) {
      if (T[j] < T[min_index]) min_index = j;
      min_val = T[min_index];
      T[min_index] = T[i];
      T[i] = min_val;
    }
  }
}

int main() {

  double tablica[] = {15, 6, 7.5, 1, 800, 41.65, 954, 23, 534.2, 0.001};
  int size = sizeof(tablica) / sizeof(tablica[0]);
  selection_sort(tablica,size);

  return 0;
}