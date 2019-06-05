all: main

main: src/c/main.c src/c/watering.c src/c/py_caller/py_calls.c
	gcc src/c/main.c src/c/watering.c src/c/py_caller/py_calls.c -o main

clean:
	rm main