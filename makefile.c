Assignment2_OS_23101597

CC = gcc
CFLAGS = -Wall -std=c11

OUT1 = fork_out
OUT2 = mahmoud_out
OUT3 = mahmoud1_out
OUT4 = mahmoud2_out

# Source files
SRC1 = fork.c
SRC2 = mahmoud.c
SRC3 = mahmoud1.c
SRC4 = mahmoud2.c

# Default: build all programs
all: $(OUT1) $(OUT2) $(OUT3) $(OUT4)

$(OUT1): $(SRC1)
	$(CC) $(CFLAGS) $(SRC1) -o $(OUT1)

$(OUT2): $(SRC2)
	$(CC) $(CFLAGS) $(SRC2) -o $(OUT2)

$(OUT3): $(SRC3)
	$(CC) $(CFLAGS) $(SRC3) -o $(OUT3)

$(OUT4): $(SRC4)
	$(CC) $(CFLAGS) $(SRC4) -o $(OUT4)

# Run individual tasks
task1: $(OUT1)
	./$(OUT1)

task2: $(OUT2)
	./$(OUT2)

task3: $(OUT3)
	./$(OUT3)

task4: $(OUT4)
	./$(OUT4)

# Remove compiled files
clean:
	rm -f $(OUT1) $(OUT2) $(OUT3) $(OUT4)

