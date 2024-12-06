# Techniki projektowania algorytmów

`Techniki projektowania algorytmów` to zbiór metod i strategii, które pomagają w tworzeniu wydajnych algorytmów dla rozwiązania danego problemu.
Są jak "plany działania", które podpowiadają, jak podejść do problemu, podzielić go na części i znaleźć rozwiązanie. Dzięki nim można wybrać najlepszy sposób rozwiązania problemu w zależności od jego rodzaju i ograniczeń, takich jak czas czy pamięć.

## Algorytmy siłowe (ang. Brute Force)

**Definicja:**  
Algorytmy, które polegają na przetestowaniu wszystkich możliwych rozwiązań i wybraniu najlepszego.
Najczęsciej stosowana gdy celem jest uzyskanie tylko i wyłacznie najlepszego (optymalnego) rozwiązania.

### Zastosowanie:
Problemy, gdzie przestrzeń rozwiązań jest niewielka, np.:
  - Generowanie permutacji.
  - Małe instancje problemu plecakowego.

### Zalety:
- Gwarantuje znalezienie optymalnego rozwiązania.
- Łatwa implementacja.

### Wady:
- Bardzo wysoka złożoność obliczeniowa dla dużych danych wejściowych.

### Charakterystyczna cecha:
- Kompleksowe przeszukiwanie całej przestrzeni rozwiązań, bez optymalizacji.

---

## Algorytmy zachłanne (Greedy Algorithms)

**Definicja:**  
Algorytmy, które podejmują sekwencję decyzji, wybierając zawsze lokalnie optymalne rozwiązanie, mając nadzieję, że doprowadzi ono do globalnie optymalnego wyniku.

### Zastosowanie:
- Problemy z własnością zachłanności, np.:
  - `Problem wydawania reszty`.
  - `Problem plecakowy`.
  - `Problem najkrótszej ścieżki` (algorytm Dijkstry).

### Zalety:
- Szybka implementacja i wykonanie.
- Zwykle mniejsza złożoność czasowa w porównaniu do innych podejść.
- Intuicyjne rozwiązania.

### Wady:
- Nie gwarantuje otrzymania optymalnego rozwiązania.

### Charakterystyczna cecha:
- Podejmowanie decyzji krok po kroku, wybierając rozwiązanie optymalne w danym momencie (lokalnie), bez cofania się i przeglądania alternatyw.

---

## Algorytmy oparte o technikę programowania dynamicznego (Dynamic Programming)

**Definicja:**  
Algorytmy, które rozkładają problem na mniejsze, nakładające się podproblemy, rozwiązują je raz i przechowują wyniki (używają podejścia "zapamiętania" - memoization lub tablic dynamicznych).

### Zastosowanie:
- Problemy optymalizacyjne, np.:
  - `Problem plecakowy`.
  - `Problem najdłuższego wspólnego podciągu` (LCS).
  - `Problem najkrótszej ścieżki w grafach` (Floyd-Warshall, Bellman-Ford).
  - `Wyznacanie n-tej liczby w ciągu Fibonacciego`.

### Zalety:
- Gwarantuje optymalne rozwiązanie.
- Redukuje redundantne obliczenia dzięki przechowywaniu wyników podproblemów.

### Wady:
- Może wymagać dużej ilości pamięci (przechowywanie wielu wyników podproblemów).
- Trudniejsza implementacja w porównaniu do prostszych metod.

### Charakterystyczna cecha:
- Wykorzystanie wcześniejszych wyników do rozwiązania problemu, często w formie tabelarycznej lub rekursji z pamięcią.

---

## Algorytmy oparte o technikę dziel i zwyciężaj (Divide and Conquer)

**Definicja:**  
Algorytmy, które dzielą problem na mniejsze podproblemy, rozwiązują je niezależnie, a następnie łączą wyniki w rozwiązanie całego problemu.

### Zastosowanie:
- Algorytmy sortujące:
  - `Merge Sort`.
  - `Quick Sort`.
- Algorytmy wyszukiwania:
  - `Binary Search`.
- Problemy geometryczne:
  - `Najbliższa para punktów`.

### Zalety:
- Skuteczne przy problemach z dużą ilością danych.
- Zwykle lepsza złożoność czasowa niż metody siłowe.

### Wady:
- Wymaga dodatkowej pamięci na rekurencyjne wywołania.
- Złożona implementacja w niektórych przypadkach.

### Charakterystyczna cecha:
- Rekurencyjne rozbijanie problemu na mniejsze podproblemy, aż do uzyskania przypadku trywialnego np. sortowanie jedno elementowej tablicy.
