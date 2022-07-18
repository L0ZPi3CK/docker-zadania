# Docker-Zadania

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

3. Sprawdzić IMAGE ID lub TAG który nadaliśmy
```console
docker ps
``` 

4. Uruchomić 
``` console
docker run *IMAGE ID lub TAG~*
```
![obraz](https://user-images.githubusercontent.com/84734341/179549467-75a24a2f-ec14-42d7-9894-57b4616e817b.png)

