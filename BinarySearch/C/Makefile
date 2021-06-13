all: test

test: test.o Algo.o
	cc -g -o test test.o Algo.o

test.o: test.c
	cc -g -Werror -c test.c

Algo.o: Algo.c
	cc -g -Werror -c Algo.c

clean:
	rm *.o test

git:
	git add --all;git commit -m "Automatic git";git push
