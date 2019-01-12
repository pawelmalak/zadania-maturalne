# Funkcja zwraca indeks szukanego elementu na liście lub None jeśli element nie istnieje
def binary_search(tablica, szukana):
  start = 0
  koniec = len(tablica) - 1

  while start <= koniec:
    mid = (start + koniec) // 2

    if tablica[mid] == szukana:
      return mid
    else:
      if tablica[mid] > szukana:
        koniec = mid -1
      else:
        start = mid + 1

  return None 


tablica = [i for i in range(1,101)] # utworzenie listy z rosnącymi wartościami od 1 do 100
print(binary_search(tablica, 40)) # zwróci 6
print(binary_search(tablica, 59)) # zwróci None