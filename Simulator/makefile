CC = gcc
TARGET = ./bin/Sim
SRC = ./SRC/Sim.c

COMP_PATH = ../Component
INC_FLAG = -I$(COMP_PATH)/include
LIB_PATH_FLAG = -L$(COMP_PATH)/lib
LIB_FLAG = $(COMP_PATH)/lib/Comp.so

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(SRC) $(INC_FLAG) $(LIB_FLAG) -Wl,-rpath,/home/secureomen/PINLab/Component/lib

clean:
	rm -f ./bin/*