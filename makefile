compile: main.c fonction.c
	gcc main.c fonction.c -o programme
run: 
	./programme
clean:
	rm -rf programme
