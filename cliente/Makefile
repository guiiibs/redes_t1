all: conexao.o kermit.o cliente.o  main clean

main: 
	gcc -o cliente cliente.o conexao.o kermit.o

cliente.o: cliente.c
	gcc -o cliente.o -c cliente.c

conexao.o: conexao.c
	gcc -o conexao.o -c conexao.c

kermit.o: kermit.c
	gcc -o kermit.o -c kermit.c

clean:
	rm -rf *~ *.o