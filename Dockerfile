FROM gcc:latest

COPY . /usr/src/algorithm1

WORKDIR /usr/src/algorithm1

RUN g++ -o Algorithm1 Algorithm1.cpp

CMD [ "./Algorithm1" ]
