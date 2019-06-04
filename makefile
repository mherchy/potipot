all: main

main: clean
	gcc src/c/main.c src/c/py_caller/py_calls.c -o main

clean:
	rm main