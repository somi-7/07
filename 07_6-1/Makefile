TARGET = main.exe
OBJS = main.o sub.o

$(TARGET): $(OBJS)
	gcc $(OBJS) -o $(TARGET)

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

sub.o: sub.c
	gcc -g -Wall -c sub.c -o sub.o

clean:
	rm -f $(OBJS) $(TARGET)