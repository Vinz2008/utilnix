CC=gcc

all: setup cat echo ls clean-build

setup:
	rm -rf build
	mkdir build
	mkdir build/objs

cat:
	$(CC) -o build/utilnix-cat src/cat.c

echo:
	$(CC) -o build/utilnix-echo src/echo.c

ls:
	$(CC) -o build/utilnix-ls src/ls.c

clean-build:
	rm -rf build/objs


clean:
	rm -rf build
