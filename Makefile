
./build/pdp11_emulator: ./build/pdp11_mem.o 
	gcc -o ./build/pdp11_emulator ./build/pdp11_mem.o

./build/pdp11_mem.o: ./src/pdp11_mem.c
	gcc -c -o ./build/pdp11_mem.o ./src/pdp11_mem.c

clean:
	rm -rf ./build/*


