CC=gcc

all: setup cat echo ls true touch clean-build

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

true:
	$(CC) -o build/utilnix-true src/true.c

touch:
	$(CC) -o build/utilnix-touch src/touch.c

clean-build:
	rm -rf build/objs


clean:
	rm -rf build
