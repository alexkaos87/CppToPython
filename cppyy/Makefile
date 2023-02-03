SHELL = /bin/sh

CC = g++
 
CFLAGS  = -fPIC -shared -Wall -Werror -Wextra -O2 -std=c++17

TARGET = AwesomeLibrary.so
SOURCES = $(shell echo *.cpp)
HEADERS = $(shell echo *.h)
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) -fPIC -c $(SOURCES)

$(TARGET): $(OBJECTS)
	$(CC) -shared $(CFLAGS) -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(TARGET) $(OBJECTS)
