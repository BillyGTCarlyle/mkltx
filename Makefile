
.PHONY: all clean


all: mkltx



mkltx: main.cpp generator.o
	g++ -g main.cpp generator.o -o mkltx -Wall -Werror

generator.o:
	g++ generator.cpp -c -Wall -Werror

clean:
	rm -f ./mkltx
	rm -f ./generator.o

install: mkltx
	cp mkltx /usr/bin

uninstall:
	rm /usr/bin/mkltx

