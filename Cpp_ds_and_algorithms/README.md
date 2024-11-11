# Algorytmy Sortowania
> Uwaga: Jeśli przeglądasz to w VS Code to użyj `ctrl`+`shift`+`V`, aby zobaczyć widok po renderze.

## 1. Merge Sort (Sortowanie przez Scalanie)
Merge Sort to algorytm sortowania działający na zasadzie dziel i zwyciężaj. Dzieli listę na połowy, sortuje je rekurencyjnie, a następnie scala je w jedną posortowaną listę.

Przykład implementacji dla C++: `merge_sort.cpp`

### Kroki działania:
1. Jeśli lista zawiera mniej niż dwa elementy, jest już posortowana.
2. Podziel listę na dwie połowy.
3. Rekurencyjnie wykonaj `Merge Sort` na każdej połowie.
4. Scal posortowane części, tworząc jedną posortowaną listę.

### Złożoność obliczeniowa:
- Czasowa: O(n log n) w każdym przypadku
- Pamięciowa: O(n)

---

## 2. Quick Sort (Sortowanie Szybkie)
Quick Sort to algorytm sortowania wybierający element zwany pivotem i dzielący listę na dwie części: jedną z elementami mniejszymi od pivotu, a drugą z większymi, a następnie rekurencyjnie sortuje każdą część.

Przykład implementacji dla C++: `quick_sort.cpp`

### Kroki działania:
1. Wybierz element pivot (w kodzie jest to element środkowy).
2. Podziel elementy listy tak, aby po lewej stronie pivotu były mniejsze, a po prawej większe elementy.
3. Rekurencyjnie wykonaj `Quick Sort` na obu podlistach.
4. Po zakończeniu podziału lista jest posortowana.

### Złożoność obliczeniowa:
- Średnia: O(n log n)
- Najgorsza: O(n²) (gdy pivot wybierany jest nieoptymalnie)
- Pamięciowa: O(log n) w optymalnym przypadku (sortowanie na miejscu)

---

## 3. Bubble Sort (Sortowanie Bąbelkowe)
Bubble Sort to prosty algorytm sortowania, który wielokrotnie przechodzi przez listę, porównując sąsiadujące elementy i zamieniając je, jeśli są w złej kolejności.

Przykład implementacji dla C++: `bubble_sort.cpp`

### Kroki działania:
1. Przejdź przez listę.
2. Porównuj sąsiadujące elementy i zamień je, jeśli są w złej kolejności.
3. Powtarzaj kroki 1-2, aż lista będzie posortowana.

### Złożoność obliczeniowa:
- Czasowa: O(n²) w najgorszym i średnim przypadku, O(n) w najlepszym przypadku (gdy lista jest już posortowana)
- Pamięciowa: O(1)

---

## 4. Insertion Sort (Sortowanie przez Wstawianie)
Insertion Sort działa na zasadzie tworzenia posortowanej części listy i stopniowego dodawania do niej kolejnych elementów we właściwej pozycji.

Przykład implementacji dla C++: `inser_sort.cpp`

### Kroki działania:
1. Przejdź przez listę od drugiego elementu.
2. Wstaw bieżący element w odpowiednie miejsce w posortowanej części listy.
3. Powtarzaj kroki, aż wszystkie elementy zostaną wstawione we właściwe miejsca.

### Złożoność obliczeniowa:
- Czasowa: O(n²) w najgorszym i średnim przypadku, O(n) w najlepszym przypadku (gdy lista jest już posortowana)
- Pamięciowa: O(1)
