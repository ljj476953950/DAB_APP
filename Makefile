objects = broadcast.o

broadcast : $(objects)
	gcc -o broadcast $(objects)
broadcast.o :	broadcast.c
	cc -c broadcast.c