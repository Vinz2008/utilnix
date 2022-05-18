CC=gcc

all: setup cat echo clean-build

setup:
	rm -rf build
	mkdir build
	mkdir build/objs

cat:
	$(CC) -o build/utilnix-cat src/cat.c

echo:
	$(CC) -o build/utilnix-echo src/echo.c

clean-build:
	rm -rf build/objs


clean:
	rm -rf build
