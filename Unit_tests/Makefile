CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = ..
INCDIR = ..

SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(SRCS:.c=.o)

TEST_SRCS = $(wildcard *.c)
TEST_OBJS = $(TEST_SRCS:.c=.o)

TARGET = unit_tests.out

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS) $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET) $(OBJS) $(TEST_OBJS)
