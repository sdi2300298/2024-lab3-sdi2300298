#gcc -c test.c -o test.o
#gcc -c linked_list.o test.o -o test


CC = gcc

SOURCE_1 = test.c 
SOURCE_2 =linked_list.c

OBJ_1 = test.o 
OBJ_2 = linked_list.o

PROGRAM = test
CREATE = make

$(CREATE): 
	$(CC) -c $(SOURCE_1) -o $(OBJ_1)
	$(CC) -c $(SOURCE_2) -o $(OBJ_2)
	$(CC) $(OBJ_1) $(OBJ_2) -o $(PROGRAM)