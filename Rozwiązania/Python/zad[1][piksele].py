import math

# Otwarcie pliku z danymi
plik = open("../../Dane/piksele.txt", "r")

# Utworzenie pliku z wynikami
wyniki = open("Wyniki/wyniki[1][piksele].txt", "w")


# Zadanie 1.1
def zadanie_1_1(PIKSELE):

  najjasniejszy = 0
  najciemniejszy = 255

  # Pętla po wszystkich indeksach
  for x in range(200):
    for y in range(320):
      # Sprawdzenie czy obecny piksel jest jaśniejszy od obecnie najjaśniejszego
      if PIKSELE[x][y] > najjasniejszy:
        najjasniejszy = PIKSELE[x][y]
      # Sprawdzenie czy obecny piksel jest ciemniejszy od obecnie najciemniejszego
      if PIKSELE[x][y] < najciemniejszy:
        najciemniejszy = PIKSELE[x][y]
  
  # Zapis wyników dla zadania 1.1
  wyniki.write('1)\n' + str(najjasniejszy) + '\n' + str(najciemniejszy) + '\n\n')


# Zadanie 1.2
def zadanie_1_2(PIKSELE):
  ile_wierszy = 0

  # Pętla wiersz po wierszu
  for x in range(200):
    for y in range(320):
      if PIKSELE[x][y] != PIKSELE[x][319 - y]:
        ile_wierszy += 1
        break
  
  # Zapis wyników dla zadania 1.2
  wyniki.write('2)\n' + str(ile_wierszy) + '\n\n')


# Zadanie 1.3
def zadanie_1_3(PIKSELE):
  ile_kontrastujacych = 0

  # Iteracja po każdym pikselu
  for x in range(200):
    for y in range(320):
      if x > 0 and abs(PIKSELE[x][y] - PIKSELE[x - 1][y]) > 128:
        ile_kontrastujacych += 1
        continue
      if x < 199 and abs(PIKSELE[x][y] - PIKSELE[x + 1][y]) > 128:
        ile_kontrastujacych += 1
        continue
      if y > 0 and abs(PIKSELE[x][y] - PIKSELE[x][y - 1]) > 128:
        ile_kontrastujacych += 1
        continue
      if y < 319 and abs(PIKSELE[x][y] - PIKSELE[x][y + 1]) > 128:
        ile_kontrastujacych += 1
        continue
  
  wyniki.write('3)\n' + str(ile_kontrastujacych) + '\n\n')


# Główna funkcja
def zadanie():

  # Zapisanie danych z pliku do lity
  PIKSELE = [[0 for col in range(320)] for row in range(200)]
  DANE = plik.readlines()

  i = 0
  for linia in DANE:
    j = 0
    for komorka in linia.split():
      PIKSELE[i][j] = int(komorka)
      j += 1
    i += 1

  # Wykonanie zadania 1
  zadanie_1_1(PIKSELE)
  zadanie_1_2(PIKSELE)
  zadanie_1_3(PIKSELE)

  # Zamknięcie pliku z danymi
  plik.close()

  # Zamknięcie pliku z wynikami
  wyniki.close()


# Wywołanie głównej funckcji
zadanie()