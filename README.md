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


# Tworzenie algorytmu

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
Dla 10.000: Wyniki w zdecydowanej większości mieszczą się w zakresie od 3.10 do 3.18  
Dla 100.000: Wyniki w zdecydowanej większości mieszczą się w zakresie od 3.13 do 3.15  
Dla 1.000.000: Wyniki w zdecydowanej większości mieszczą się w zakresie od 3.138 do 3.145  
Dla 10.000.000: Wyniki w zdecydowanej większości mieszczą się w zakresie od 3.140 do 3.142  
Dla 100.000.000: Wyniki w zdecydowanej większości mieszczą się w zakresie od 3.1412 do 3.1418  
Dla 1.000.000.000: Wyniki w zdecydowanej większości mieszczą się w zakresie od 3.1414 dp 3.1416  
Podsumowując im większa ilość wprowadzonych próbek tym wynik bliższy jest liczbie π.  

# Proces nauki dockera
Obejrzałem kilka filmów tłumaczących iddę dockera, pobrałem i zainstalowałem go, a następnie obejrzałem kilka filmów tłumaczących jak stworzyć   
dockerfile, jak zbudować projekt, i jak uzyskać kontener oraz jak nimi zarządzać. 

Stworzyłem więc Dockerfile i umieściłem go w jednym katalogu z algorytmem napisanym w c++  
<img src="https://user-images.githubusercontent.com/84734341/179731013-9da62e52-21ec-4d4f-aea6-1a4f0daead59.JPG" width="400">

Zbudowałem projekt  
<img src="https://user-images.githubusercontent.com/84734341/179731516-ed1bc793-2342-4ba8-9063-909b1630cdb6.JPG" width="400">
<img src="https://user-images.githubusercontent.com/84734341/179731545-f5bc4ea6-a18a-4e34-8a4b-931abbf8795f.JPG" width="400">
<img src="https://user-images.githubusercontent.com/84734341/179731562-9e328f6e-51be-4fdc-a5ac-d3e074442648.JPG" width="400">
  
Sprawdziłem posiadane obrazy i okazało się iż przypisywałem taką samą nazwę i tag do różnych projektów, jednakże każdy ma swoje własne id  
dlatego docker pozwala na taką operację.  
<img src="https://user-images.githubusercontent.com/84734341/179732700-ddd12ebe-241c-479a-ad89-e30a6b55d9af.JPG" width="400">
  
Pozostałe projekty nie były mi potrzebne więc je usunąłem.  
<img src="https://user-images.githubusercontent.com/84734341/179733429-be247ee5-c4ea-409d-824e-b1271437dda0.JPG" width="400">
  
Mając poprawnie zbudowany projekt wystarczyło go uruchomić za pomocą run  
<img src="(https://user-images.githubusercontent.com/84734341/179733683-a5333370-25aa-4ab6-a386-4ea2816ff4e6.JPG" width="400">
  
Tak oto uzyskałem kontener:  
<img src="https://user-images.githubusercontent.com/84734341/179734204-1e0631bb-d316-4bf0-a0d3-5339e11f686f.JPG" height="400"> 
<img src="https://user-images.githubusercontent.com/84734341/179734178-f580b23f-10ce-4731-b09c-e99122617e37.JPG" width="400">

