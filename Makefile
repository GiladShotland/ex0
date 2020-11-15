CC = gcc
AR = ar -rcs
FLAGS = -Wall

all: mymaths mymathd mains maind
mains:  main.o libmyMath.a
	$(CC) $(FLAGS) -o mains  main.o libmyMath.a
maind:  main.o libmyMath.so
	$(CC) $(FLAGS) -o maind  main.o ./libmyMath.so
mymaths: libmyMath.a
libmyMath.a:  power.o basicMath.o myMath.h
	$(AR) libmyMath.a  power.o basicMath.o
mymathd: libmyMath.so
libmyMath.so:  power.o basicMath.o myMath.h
	$(CC) -shared -o libmyMath.so  power.o basicMath.o
main.o: main.c
	$(CC) $(FLAGS) -c main.c
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

.PHONY: clean all mymaths mymathd

clean:
	rm -f *.o *.a *.so mains maind
