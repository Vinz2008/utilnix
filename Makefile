CC=gcc

all: setup cat echo clean

setup:
	rm -rf build
	mkdir build

cat:
	$(CC) -o utilnix-cat src/cat.c

echo:
	$(CC) -o utilnix-echo src/echo.c

clean:
	rm -rf build
