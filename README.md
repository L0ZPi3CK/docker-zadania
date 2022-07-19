# Zadanie1 - Algorytmy

Aby uruchomić kod należy:

1. Sklonować rozwiązanie na lokalną maszynę

```console
 git clone https://github.com/L0ZPi3CK/docker-zadania
```

2. Następnie będąc w docker-zadania zbudować obraz za pomocą
```console
docker build .
```
![obraz](https://user-images.githubusercontent.com/84734341/179549627-264809bd-0e2a-41ee-9be9-f8075ec1e381.png)  
| -t dodaje tag

3. Sprawdzić IMAGE ID lub REPOSITORY:TAG który nadaliśmy
```console
docker ps
``` 

4. Uruchomić 
``` console
docker run *IMAGE ID lub REPOSITORY:TAG*
```
![obraz](https://user-images.githubusercontent.com/84734341/179549467-75a24a2f-ec14-42d7-9894-57b4616e817b.png)


# Proces nauki

1. Zacząłem od zrozumienia metody Monte Carlo i pierwszym co przyszło mi do głowy było stworzenie 2 odcinków
pierwszego długości *x* i drugiego dłygości *πx*, następnie losowo wybierania punktów na obu tych odcinkach.
Jak łatwo zauważyć trafień w drugi odcinek powinno być więcej o dokładnie π razy. Jednak ta metoda wymaga znajomości π.

Zrobiłem więc research i trafiłem na metodę która nie wymaga znajomości π. Wynika z niej iż w momencie losowania punktów
na obszarze kwadratu, który posiada wpisany okrąg, ilość trafień w pole trójkąta podzielona przez całkowitą ilość trafień(pole kwadratu)
i pomnożona przez 4 daje π. Bierze się to z z wzorów na pole kwadratu i koła ->  
  
r - połowa boku kwadratu/średnica koła  
Pole koła: πr<sup>2</sup> &nbsp;  
Pole kwadratu: 4r<sup>2</sup> &nbsp;  
Daje to końcowo πr<sup>2</sup>/4r<sup>2</sup> czyli π/4
  
Metodę tą zastosowałem w swoim programie i w zależności od ilości wylosowanych punktów zauważyłem:  
Dla 1: Wynik zawsze będzie wynosił 4  
  
Dla 10: Uzyskujemy wynik z dokładnością do jednego miejsca po przecinku w zakresie od 2 do 4  
  
Dla 100: Uzyskujemy wynik z dokładnością do dwóch miejsc po przecinku, a wyniki w zdecydowanej większości mieszczą się w zakresie od 2.50 do 3.50  
  
Dla 1000: Uzyskujemy wynik z dokładnością do trzech miejsc po przecinku, a wyniki w zdecydowanej większości mieszczą się w zakresie od 3.000 do 3.250  
  
Dla 10000: Uzyskujemy wynik z dokładnością do czterech miejsc po przecinku, a wyniki w zdecydowanej większości mieszczą się w zakresie 3.1000 do 3.1800  
  
Dla 100000: Uzyskujemy wynik z dokładnością do pięciu miejsc po przecinku, a wyniki w zdecydowanej większości mieszczą się w zakresie 3.13000 do 3.15000  
    
Podsumowując im większa ilość wprowadzonych próbek tym wynik bliższy jest liczbie π.
