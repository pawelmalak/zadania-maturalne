import math

# Otwarcie pliku z danymi
plik = open("../../Dane/sygnaly.txt", "r")

# Utworzenie pliku z wynikami
wyniki = open("Wyniki/wyniki[2][wega].txt", "w")

# Zadanie 2.1
def zadanie_2_1(SLOWA):
  haslo = ''

  for i in range(1000):
    if i % 40 == 39:
      haslo += SLOWA[i][9]
    
  wyniki.write('1)\n' + haslo + '\n\n')


# Zadanie 2.2
def zadanie_2_2(SLOWA):
  najdluzsze_index = 0
  najdluzsze_dlugosc = 0

  for slowo in range(1000):
    ile = 0
    for asci in range(65, 91):
      for litera in SLOWA[slowo]:
        if asci == ord(litera):
          ile += 1
          if ile > najdluzsze_dlugosc:
            najdluzsze_dlugosc = ile
            najdluzsze_index = slowo
          break
  
  wyniki.write('2)\n' + SLOWA[najdluzsze_index] + str(najdluzsze_dlugosc) + '\n\n')


# Zadanie 3: funkcja pomocnicza
def pomoc(slowo):
  wynik = True

  for litera in range(len(slowo) - 2):
    if abs(ord(slowo[litera]) - ord(slowo[litera + 1])) > 10:
      wynik = False
      break
    else:
      wynik = True
  return wynik


# Zadanie 3
def zadanie_2_3(SLOWA):
  
  wyniki.write('3)\n')

  for slowo in range(1000):
    if pomoc(SLOWA[slowo]):
      wyniki.write(SLOWA[slowo])



# Główna funkcja
def zadanie():
  # Zapisanie każdej linii do listy
  SLOWA = plik.readlines()

  # Wykonanie zadań
  zadanie_2_1(SLOWA)
  zadanie_2_2(SLOWA)
  zadanie_2_3(SLOWA)

  # Zamknięcie pliku z danymi
  plik.close()

  # Zamknięcie pliku z wynikami
  wyniki.close()

# Wywołanie głównej funkcji
zadanie()