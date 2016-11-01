INCFILES=-Iinclude
CFLAGS = -Wall -Wextra -pedantic
BINFILE=prog

CFILES := $(shell find src -mindepth 1 -maxdepth 4 -name "*.c")

default:
		gcc $(CFLAGS) -o $(BINFILE) $(CFILES) $(INCFILES)

clean:
		rm -r $(BINFILE)

stupid:
		$(shell echo hello)
