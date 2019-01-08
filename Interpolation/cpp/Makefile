OBJS=methods.o test.o
INCLUDES=-I.

all: test

test: $(OBJS)
	g++ -o test $(OBJS)

.cc.o:
	g++ $(INCLUDES) -c $<

clean: rm -f *.o test
