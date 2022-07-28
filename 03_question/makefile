TARGET=exec
CC=gcc
LD=gcc
CCFLAGS=-w -pg -g
OBJS=main.o

exec:$(OBJS)
	$(LD) $(CCFLAGS) $(OBJS) -o $(TARGET)

main.o: src/main.c
	$(CC) src/main.c -o main.o -c $(CCFLAGS)

clean:
	rm -rf *.o gmon.out exec
