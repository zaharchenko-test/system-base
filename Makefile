all:export

export:
	ln -s libs/arm64-v8a bin

clean:
	rm -rf libs obj bin
