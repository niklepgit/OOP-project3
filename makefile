CC=g++
CFLAGS=-Wall

prog:main.o artifacts.o masterpiece.o paintings.o sculptures.o
	$(CC) -o prog main.o artifacts.o masterpiece.o paintings.o sculptures.o

main.o:main.cpp artifacts.o masterpiece.o paintings.o sculptures.o artifacts.hpp artifacts.hpp masterpiece.hpp paintings.hpp sculptures.hpp
	$(CC) $(CFLAGS) -c main.cpp artifacts.cpp masterpiece.cpp paintings.cpp

artifacts.o:artifacts.cpp artifacts.hpp	
	$(CC) $(CFLAGS) -c artifacts.cpp

masterpiece.o:masterpiece.cpp artifacts.hpp	masterpiece.hpp
	$(CC) $(CFLAGS) -c masterpiece.cpp

paintings.o:paintings.cpp masterpiece.hpp paintings.hpp 
	$(CC) $(CFLAGS) -c paintings.cpp

sculptures.o:sculptures.cpp paintings.hpp sculptures.hpp
	$(CC) $(CFLAGS) -c sculptures.cpp

clean:
	rm -f *.o
