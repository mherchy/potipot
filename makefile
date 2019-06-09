all: main


main: mesures.o send.o connection.o proto.o py_calls.o
	gcc src/c/main.c *.o -o main


mesures.o:
	gcc -c src/c/mesures/mesures.c


send.o:
	gcc -c src/c/send/send.c
connection.o:
	gcc -c src/c/send/socket/connection.c
proto.o:
	gcc -c src/c/send/socket/proto.c



py_calls.o:
	gcc -c src/c/py_caller/py_calls.c

clean:
	rm -f main *.o