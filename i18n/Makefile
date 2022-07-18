CC      := gcc
LIBS    :=
LDFLAGS :=
DEFINES :=
INCLUDE := -I.
CFLAGS  := -Wall -O3 $(DEFINES) $(INCLUDE)
#CFLAGS  := -g -O0 -Wall $(DEFINES) $(INCLUDE)

SOURCE  := $(wildcard *.c)
OBJS    := $(patsubst %.c,%.o,$(SOURCE))

TARGET  := test_i18n

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS) $(LDFLAGS) $(LIBS)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

.PHONY: clean
clean:
	@rm -f $(OBJS) $(TARGET)
