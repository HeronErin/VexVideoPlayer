
all: clean main run
clean:
	-rm main
main: main.c 
	gcc main.c -o main -lX11 -lXext
run:
	./main