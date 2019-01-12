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
  wyniki.write('1)\n' + str(najjasniejszy) + '\n' + str(najciemniejszy) + '\n')

# Instrukcje wstępne
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

# Wywołanie zadania 1
zadanie_1_1(PIKSELE)

# Zamknięcie pliku z danymi
plik.close()

# Zamknięcie pliku z wynikami
wyniki.close()