all: main


main: src/c/main.c mesures.o send.o connection.o proto.o py_calls.o
	gcc src/c/main.c *.o -o main


mesures.o: src/c/mesures/mesures.c
	gcc -c src/c/mesures/mesures.c


send.o: src/c/send/send.c
	gcc -c src/c/send/send.c
connection.o: src/c/send/socket/connection.c
	gcc -c src/c/send/socket/connection.c
proto.o: src/c/send/socket/proto.c
	gcc -c src/c/send/socket/proto.c



py_calls.o: src/c/py_caller/py_calls.c
	gcc -c src/c/py_caller/py_calls.c

clean:
	rm -f main *.o