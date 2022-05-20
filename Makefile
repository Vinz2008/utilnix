CC=gcc

all: setup cat echo ls true touch rm mkdir pwd whoami uptime head clean-build

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

rm:
	$(CC) -o build/utilnix-rm src/rm.c

mkdir:
	$(CC) -o build/utilnix-mkdir src/mkdir.c

pwd:
	$(CC) -o build/utilnix-pwd src/pwd.c


whoami:
	$(CC) -o build/utilnix-whoami src/whoami.c

uptime:
	$(CC) -o build/utilnix-uptime src/uptime.c

head:
	$(CC) -o build/utilnix-head src/head.c

clean-build:
	rm -rf build/objs


clean:
	rm -rf build
