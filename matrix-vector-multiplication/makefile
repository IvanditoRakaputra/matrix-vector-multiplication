run:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o main.out main.c mylib.o
	./main.out

time:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o time.out timetest.c mylib.o
	./time.out

space:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o space.out space.c mylib.o
	./space.out

clear:
	rm *.out
	rm *.o