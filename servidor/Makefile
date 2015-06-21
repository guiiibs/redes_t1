all: conexao.o kermit.o servidor.o  main clean

main: 
	gcc -o servidor servidor.o conexao.o kermit.o

servidor.o: servidor.c
	gcc -o servidor.o -c servidor.c

conexao.o: conexao.c
	gcc -o conexao.o -c conexao.c

kermit.o: kermit.c
	gcc -o kermit.o -c kermit.c

clean:
	rm -rf *~ *.o