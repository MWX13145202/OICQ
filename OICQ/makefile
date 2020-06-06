all:cli ser
cli:client.c
	gcc client.c protocol.c -o cli -pthread
ser:server.c
	gcc server.c usrList.c protocol.c file.c -o ser -lpthread
clean:
	rm cli ser

