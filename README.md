# zadania-maturalne



## Zadania:

### Zadanie 1: Piksele

> W  pliku  dane1.txt  znajduje  się  200  wierszy.  Każdy  wiersz  zawiera  320  liczb  naturalnych  z przedziału   od   0   do   255,   oddzielonych   znakami   pojedynczego   odstępu   (spacjami).   Przedstawiają one jasności kolejnych pikseli czarno-białego obrazu o wymiarach 320 na 200 pikseli (od 0 – czarny do 255 – biały). Napisz  program(y),  który(e)  da(dzą)  odpowiedzi  do  poniższych  zadań.  Odpowiedzi  zapisz  w pliku wyniki.txt, a każdą odpowiedź poprzedź numerem oznaczającym odpowiednie zadanie.

Zadanie 1.1
> Podaj jasność najjaśniejszego i jasność najciemniejszego piksela.
> **Poprawny wynik: 221 i 7**

Zadanie 1.2
> Podaj, ile wynosi najmniejsza liczba wierszy, które należy usunąć, żeby obraz miał pionową oś symetrii.  Obraz  ma  pionową oś  symetrii,  jeśli  w  każdym  wierszu  i-ty  piksel  od  lewej  strony  przyjmuje tę samą wartość, co i-ty piksel od prawej strony, dla dowolnego 1 ≤i ≤320. 
> **Poprawny wynik: 149**

Zadanie 1.3
> Sąsiednie  piksele  to  takie,  które  leżą  obok  siebie  w  tym  samym  wierszu lub  w  tej  samej  kolumnie.  Dwa  sąsiednie  piksele  nazywamy  kontrastującymi, jeśli  ich  wartości  różnią  się o więcej niż 128. Podaj liczbę wszystkich takich pikseli, dla których istnieje przynajmniej jeden kontrastujący z nim sąsiedni   piksel.
> **Poprawny wynik: 753**

Zadanie 1.4
> Podaj długość najdłuższej linii pionowej (czyli ciągu kolejnych pikseli w tej samej kolumnie obrazka), złożonej z pikseli tej samej jasności.
> **Poprawny wynik: 5**


### Zadanie 2: WEGA

> W ramach projektu WEGA naukowcom udało się odczytać sygnały radiowe pochodzące z przestrzeni kosmicznej. Po wstępnej obróbce zapisali je do pliku sygnaly.txt. W pliku sygnaly.txt znajduje się 1000 wierszy. Każdy wiersz zawiera jedno niepuste słowo złożone z wielkich liter alfabetu angielskiego. Długość jednego słowa nie przekracza 100 znaków. Napisz program(y), który(e) da(dzą) odpowiedzi do poniższych zadań. Odpowiedzi zapisz w pliku wyniki.txt, a każdą odpowiedź poprzedź numerem oznaczającym odpowiednie zadanie.

Zadanie 2.1
> Naukowcy zauważyli, że po złączeniu dziesiątych liter co czterdziestego słowa (zaczynając od słowa czterdziestego) otrzymamy pewne przesłanie. Wypisz to przesłanie. Uwaga: Każde co czterdzieste słowo ma co najmniej 10 znaków.
> **Poprawne hasło: *ZAPISZODPOWIEDZIWPLIKUTXT*

Zadanie 2.2
> Znajdź słowo, w którym występuje największa liczba różnych liter. Wypisz to słowo i liczbę występujących w nim różnych liter. Jeśli słów o największej liczbie różnych liter jest więcej niż jedno, wypisz pierwsze z nich pojawiające się w pliku z danymi.
> **Poprawny wynik: **

Zadanie 2.3
> W tym zadaniu rozważmy odległość liter w alfabecie – np. litery A i B są od siebie oddalone o 1, A i E o 4, F i D o 2, a każda litera od siebie samej jest oddalona o 0. Wypisz wszystkie słowa, w których każde dwie litery oddalone są od siebie w alfabecie co najwyżej o 10. Słowa wypisz w kolejności występowania w pliku sygnaly.txt, po jednym w wierszu. Na przykład CGECF jest takim słowem, ale ABEZA nie jest (odległość A – Z wynosi 25).
> **Poprawny wynik: **