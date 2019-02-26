## Wstęp
W pliku piksele.txt znajduje się 200 wierszy. Każdy wiersz zawiera 320 liczb naturalnych z przedziału od 0 do 255, oddzielonych znakami pojedynczego odstępu (spacjami). Przedstawiają one jasności kolejnych pikseli czarno-białego obrazu o wymiarach 320 na 200 pikseli (od 0 – czarny do 255 – biały). Napisz program(y), który(e) da(dzą) odpowiedzi do poniższych zadań. Odpowiedzi zapisz w pliku wyniki.txt, a każdą odpowiedź poprzedź numerem oznaczającym odpowiednie zadanie.


### Zadanie 1.1
Podaj jasność najjaśniejszego i jasność najciemniejszego piksela.

### Zadanie 1.2
Podaj, ile wynosi najmniejsza liczba wierszy, które należy usunąć, żeby obraz miał pionową oś symetrii.  Obraz  ma  pionową oś  symetrii,  jeśli  w  każdym  wierszu  i-ty  piksel  od  lewej  strony  przyjmuje tę samą wartość, co i-ty piksel od prawej strony, dla dowolnego 1 ≤i ≤320.

### Zadanie 1.3
Sąsiednie  piksele  to  takie,  które  leżą  obok  siebie  w  tym  samym  wierszu lub  w  tej  samej  kolumnie.  Dwa  sąsiednie  piksele  nazywamy  kontrastującymi, jeśli  ich  wartości  różnią  się o więcej niż 128. Podaj liczbę wszystkich takich pikseli, dla których istnieje przynajmniej jeden kontrastujący z nim sąsiedni piksel.

### Zadanie 1.4
Podaj długość najdłuższej linii pionowej (czyli ciągu kolejnych pikseli w tej samej kolumnie obrazka), złożonej z pikseli tej samej jasności.