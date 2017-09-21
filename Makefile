all:
	clang -dynamiclib *.c -w -fvisibility=hidden -o libbreder.dylib
	clang main.c libbreder.dylib -o breder
	./breder
