# Algorytmy Wyszukiwania
> Uwaga: Jeśli przeglądasz to w VS Code to użyj `ctrl`+`shift`+`V`, aby zobaczyć widok po renderze.


## 1. Binary Search (Wyszukiwanie Binarne)
Binary Search to wydajny algorytm wyszukiwania w posortowanych strukturach danych, działający w oparciu o zasadę dziel i zwyciężaj.
Przykład implementacji w języku C++: `binary_search.cpp`

### Kroki działania:
1. Ustaw początkowe granice: `left` (lewa) i `right` (prawa) na początku i końcu listy.
2. Znajdź element środkowy (indeks `mid`).
3. Jeśli element środkowy jest równy szukanej wartości, zwróć jego indeks.
4. Jeśli szukana wartość jest mniejsza, przesuń prawą granicę (`right`) na `mid - 1`.
5. Jeśli szukana wartość jest większa, przesuń lewą granicę (`left`) na `mid + 1`.
6. Powtarzaj kroki 2-5 aż do znalezienia wartości lub wyczerpania przedziału.

### Złożoność obliczeniowa:
- Czasowa: O(log n)
- Pamięciowa: O(1) (przy wersji iteracyjnej) lub O(log n) (dla wersji rekurencyjnej).

---

## 2. Linear Search (Wyszukiwanie Liniowe)

Linear Search to prosty algorytm, który przeszukuje każdy element w strukturze danych jeden po drugim, aż znajdzie żądaną wartość lub osiągnie koniec listy.
Przykład implementacji (wyszukiwanie pierwszego i ostatniego wystąpienia szukanej liczby) w języku C++: `linear_search.cpp`

### Kroki działania:
1. Rozpocznij przeszukiwanie od pierwszego elementu.
2. Porównaj każdy element z szukaną wartością.
3. Jeśli znajdziesz szukaną wartość, zwróć jej indeks.
4. Jeśli przeszukasz całą listę i nie znajdziesz wartości, zwróć -1.

### Złożoność obliczeniowa:
- Czasowa: O(n) (dla każdego przypadku).
- Pamięciowa: O(1).

---
