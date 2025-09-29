# Compiler and flags
CC = gcc
CFLAGS = -Wall -O2

# Target program name
TARGET = currencyconverter

# Default rule
all: $(TARGET)

# Build rule
$(TARGET): currencyconverter.c
	$(CC) $(CFLAGS) -o $(TARGET) currencyconverter.c

# Remove build artifacts
clean:
	rm -f $(TARGET)

# Rebuild from scratch
rebuild: clean all

