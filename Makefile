all:build

build:
	mkdir -p bin
	gcc -s -O3 cpp/true.c -o bin/true
	gcc -s -O3 cpp/false.c -o bin/false
	gcc -s -O3 cpp/whoami.c -o bin/whoami
	gcc -s -O3 cpp/logname.c -o bin/logname
	gcc -s -O3 cpp/link.c -o bin/link
	gcc -s -O3 cpp/sync.c -o bin/sync
	gcc -s -O3 cpp/sleep.c -o bin/sleep
	gcc -s -O3 cpp/dirname.c -o bin/dirname
	gcc -s -O3 cpp/basename.c -o bin/basename
	gcc -s -O3 cpp/clear.c -o bin/clear
	gcc -s -O3 cpp/reset.c -o bin/reset
	gcc -s -O3 cpp/pwd.c -o bin/pwd
	gcc -s -O3 cpp/uname.c -o bin/uname
