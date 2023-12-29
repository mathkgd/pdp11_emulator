#include <stdio.h>

typedef unsigned char byte;  //8 bits
typedef unsigned short word; //16 bits
typedef word Adress;         //16 bits

#define MEMSIZE (64 * 1024)  //64KiB

byte mem[MEMSIZE];

void b_write(Adress adr, byte b);
byte b_read(Adress adr);
void w_write(Adress adr, byte b);
word w_read(Adress adr);

int main()
{
    return 0;
}