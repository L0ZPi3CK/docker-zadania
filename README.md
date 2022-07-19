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
 
Dla 1: Wyniki zawierają się w przedziale od 0 do 4    
Dla 10: Wyniki w zdecydowanej większości mieszczą się w zakresie od 2 do 4    
Dla 100: Wyniki w zdecydowanej większości mieszczą się w zakresie od 2.50 do 3.50    
Dla 1000: Wyniki w zdecydowanej większości mieszczą się w zakresie od 3.00 do 3.25 
Dla 10000: Wyniki w zdecydowanej większości mieszczą się w zakresie od 3.10 do 3.18
Dla 100000: Wyniki w zdecydowanej większości mieszczą się w zakresie od 3.13 do 3.15  
Dla 1000000: Wyniki w zdecydowanej większości mieszczą się w zakresie od 3.138 do 3.145
Dla 10000000: Wyniki w zdecydowanej większości mieszczą się w zakresie od 3.140 do 3.142
Podsumowując im większa ilość wprowadzonych próbek tym wynik bliższy jest liczbie π.
