CC = gcc
CFLAGS = -fPIC -shared

INC_DIR = -I./include
SRC = ./src/Comp.c

TARGET = ./lib/Comp.so

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(INC_DIR)

clean:
	rm -f ./lib/*.so