# Otwarcie pliku z danymi
plik = open("../../Dane/sygnaly.txt", "r")

# Utworzenie pliku z wynikami
wyniki = open("Wyniki/wyniki[2][wega].txt", "w")

# Zadanie 2.1
def zadanie_2_1(SLOWA):
  haslo = ''

  for i in range(1000):
    if i == 39 or i % 40 == 39:
      haslo += SLOWA[i][9]
    
  wyniki.write('1)\n' + haslo + '\n\n')


# Główna funkcja
def zadanie():
  # Zapisanie każdej linii do listy
  SLOWA = plik.readlines()


  # Wykonanie zadań
  zadanie_2_1(SLOWA)


  # Zamknięcie pliku z danymi
  plik.close()

  # Zamknięcie pliku z wynikami
  wyniki.close()

# Wywołanie głównej funkcji
zadanie()