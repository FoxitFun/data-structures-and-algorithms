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


## 4. Selection Sort (Sortowanie przez Wybieranie)
Selection Sort to algorytm sortowania, który działa poprzez wielokrotne znajdowanie najmniejszego (lub największego) elementu z nieposortowanej części listy i przenoszenie go na początek listy.

Przykład implementacji dla C++: `selection_sort.cpp`

### Kroki działania:
1. Przejdź przez listę, aby znaleźć najmniejszy element i zamień go z pierwszym elementem.
2. Znajdź kolejny najmniejszy element w pozostałej części listy i zamień go z drugim elementem.
3. Powtarzaj proces, aż cała lista będzie posortowana.

### Złożoność obliczeniowa:
- Czasowa: O(n²) w każdym przypadku
- Pamięciowa: O(1)

---


## 5. Insertion Sort (Sortowanie przez Wstawianie)
Insertion Sort działa na zasadzie tworzenia posortowanej części listy i stopniowego dodawania do niej kolejnych elementów we właściwej pozycji.

Przykład implementacji dla C++: `inser_sort.cpp`

### Kroki działania:
1. Przejdź przez listę od drugiego elementu.
2. Wstaw bieżący element w odpowiednie miejsce w posortowanej części listy.
3. Powtarzaj kroki, aż wszystkie elementy zostaną wstawione we właściwe miejsca.

### Złożoność obliczeniowa:
- Czasowa: O(n²) w najgorszym i średnim przypadku, O(n) w najlepszym przypadku (gdy lista jest już posortowana)
- Pamięciowa: O(1)

---

## 6. Selection Sort (Sortowanie przez Wybieranie)
Counting Sort to algorytm sortowania o złożoności liniowej, który działa poprzez zliczanie wystąpień każdego elementu. Jest szczególnie efektywny przy sortowaniu liczb całkowitych z ograniczonym zakresem wartości.

### Kroki działania:
1. Znajdź zakres wartości w tablicy (najmniejszą i największą wartość).
2. Stwórz tablicę pomocniczą count o rozmiarze równym zakresowi wartości i zainicjuj ją zerami.
3. Przejdź przez listę i zlicz wystąpienia każdej wartości, zapisując je w tablicy count.
4. Zaktualizuj tablicę count tak, aby zawierała pozycje końcowe każdego elementu.
5. Przejdź ponownie przez listę, wstawiając elementy na odpowiednie pozycje w tablicy wynikowej.

### Złożoność obliczeniowa:
- Czasowa: O(n)
- Pamięciowa: O(n)
