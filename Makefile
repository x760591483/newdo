CC = g++
INC = -I ./include
	
LIB = -L ./lib -lcurl

OTHER = -Wall

ALL:curl

curl:src/curl.cpp
	$(CC) $^ -o bin/$@ $(INC) $(LIB) $(OTHER)
