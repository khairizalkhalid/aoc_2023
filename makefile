CC = gcc
CFLAGS = -Wall -I./src/days
SRC = src/main.c src/days/day1.c
OUT = aoc2023

all: $(OUT)

$(OUT) : $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
