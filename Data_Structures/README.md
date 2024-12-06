# Struktury danych w C++ (`std`)

## 1. Stos (`stack`)

Struktura danych typu **LIFO** (z ang. Last In, First Out) – ostatni element dodany do stosu jest pierwszym usuniętym.

**Przykładowe zastosowanie**: przechowywanie historii odwiedzonych stron w przeglądarce.

### Główne metody
  - `push` – dodanie elementu na szczyt stosu.
  - `pop` – usunięcie elementu ze szczytu stosu.
  - `top` – dostęp do elementu na szczycie.
  - `size` – zwraca liczbę elementów w stosie.

### Przykładowy Kod:

```cpp
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // Empty stack:
    stack <int> stack_of_nums;
    
    stack_of_nums.push(10);
    stack_of_nums.push(3);
    
    cout << "No. of elem. in stack "<<stack_of_nums.size() << endl; 
    // prints: No. of elem. in stack 2

    cout << stack_of_nums.top() << endl; // prints: 3
    cout << stack_of_nums.top() << endl; // prints: 3

    stack_of_nums.pop();
    cout << "No. of elem. in stack "<<stack_of_nums.size() << endl; 
    // prints: No. of elem. in stack 1

    cout << stack_of_nums.top() << endl; // prints: 10

    return 0;
}
```

---

## 2. Kolejka (`queue`)

Struktura danych typu **FIFO** (First In, First Out) – pierwszy element dodany do kolejki jest pierwszym usuniętym.

**Przykładowe zastosowanie**: zarządzanie zadaniami w drukarce.

### Główne operacje:
  - `push` – dodanie elementu na koniec kolejki.
  - `pop` – usunięcie elementu z początku kolejki.
  - `front` – dostęp do elementu na początku kolejki.
  - `size` – zwraca liczbę elementów w kolejce.

### Przykładowy Kod:

```cpp
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // Empty stack:
    queue <int> queue_of_nums;
    
    queue_of_nums.push(10);
    queue_of_nums.push(3);
    
    cout << "No. of elem. in queue "<<queue_of_nums.size() << endl; 
    // prints: No. of elem. in queue 2

    cout << queue_of_nums.front() << endl; // prints: 10
    cout << queue_of_nums.front() << endl; // print: 10

    queue_of_nums.pop();
    cout << "No. of elem. in queue "<<queue_of_nums.size() << endl; 
    // prints: No. of elem. in queue 1

    cout << queue_of_nums.top() << endl; // prints: 3

    return 0;
}
```

---

## 3. Mapa (`map`)

Kontener przechowujący pary **klucz-wartość**, gdzie klucze są unikalne i niezmienne (nie mutowalne). Wartości powiązane z kluczem mogą być zmieniane. W mapach nie występują indeksy, ale można wykorzystać operator `[]`, używając klucza jako parametru.  
**Uwaga**: użycie operatora `[]` na kluczu, który nie występuje w mapie, spowoduje stworzenie nowego wpisu w mapie z wartością domyślną (np. `0` dla typu `int`).

### Główne operacje:
  - `at` – metoda dająca dostęp do wartości na podstawie klucza. **Uwaga**: jeśli klucz nie występuje w mapie, metoda ta zgłasza wyjątek `std::out_of_range`.
  - `insert` – metoda pozwalająca na wstawienie pary klucz-wartość do mapy. Przykład: `my_map.insert(make_pair(klucz, wartosc));`.
  - `emplace` – podobnie jak `insert`, pozwala na wprowadzenie pary klucz-wartość, ale bezpośrednio tworzy parę w miejscu. Przykład: `my_map.emplace(klucz, wartosc);`.
  - `erase` – metoda służąca do usuwania elementów mapy na podstawie klucza. Przykład: `my_map.erase(klucz);`.
  - `find` – metoda pozwalająca na sprawdzenie, czy dany klucz występuje w mapie. Zwraca iterator do elementu, lub `my_map.end()`, jeśli klucz nie istnieje.
  - `count` – metoda pozwalająca na sprawdzenie, czy dany klucz występuje w mapie. Zwraca `1`, jeśli klucz istnieje, lub `0` w przeciwnym razie.

### Przykładowy kod:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    // Tworzymy mapę, której klucze są typu string, a wartości typu int
    map<string, int> age;

    // Dodajemy elementy za pomocą operatora []
    age["Alice"] = 25;
    age["Bob"] = 30;
    age["Charlie"] = 20;

    // Dodanie elementów za pomocą metod insert i emplace
    age.insert(make_pair("Tom", 32));
    age.emplace("Johny", 19);

    // Uwaga: poniższy wpis wydrukuje 0, ale dodatkowo stworzy wpis w mapie jako para "Jack": 0
    cout << "Nowy wpis: " << age["Jack"] << endl;

    // Iteracja po elementach mapy
    cout << "Zawartość mapy:\n";
    for (const auto& entry : age) {
        cout << entry.first << " -> " << entry.second << endl;
    }

    // Sprawdzenie, czy dany klucz jest w mapie
    string my_key = "Bartek";
    if(age.find(my_key) != age.end()) {
        cout << "Znaleziono klucz " << my_key << " w mapie: " << age.at(my_key) << endl;
    } else {
        cout << "Brak wpisu dla: " << my_key << endl;
    }

    return 0;
}
```

Wynik działania programu:
```output
Nowy wpis: 0
Zawartość mapy:
Alice -> 25
Bob -> 30
Charlie -> 20
Tom -> 32
Johny -> 19
Jack -> 0
Znaleziono klucz Bartek w mapie: Brak wpisu dla: Bartek
```

---

## 4. Zbiór (`set`)
Zbiór to struktura przechowująca tylko **unikalne elementy**. Próby wprowadzenia duplikatów są ignorowane.
Zbiory nie posiadają indeksu, wiec nie można na nich używać operatora `[]`.

**Przykład użycia**: przechowywanie unikalnych identyfikatorów.

### Główne operacje:
  - `insert` - metoda służaca do dodawania nowych elementów.
  - `erase` - metoda służąca do usuwania elementów ze zbioru.
  - `size` - metoda zwracająca liczbę wszystkich elementów w zbiorze

### Przykładowy kod:

```cpp
#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Tworzenie zbioru:
    set<int> numbers;

    // Dodawanie elementów:
    numbers.insert(10);
    numbers.insert(5);
    numbers.insert(20);
    numbers.insert(10); // Ignorowane, bo 10 już istnieje.

    // Iteracja przez zbiór:
    cout << "Set contains:\n";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Usuwanie elementu:
    numbers.erase(5);

    // Wyświetlenie po usunięciu:
    cout << "After removing 5:\n";
    for (auto num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

Wynik działania:
```output
Set contains:
5 10 20 
10 is in the set.
After removing 5:
10 20 
```
---
