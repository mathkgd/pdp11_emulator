#include <stdio.h>
#include <assert.h>

typedef unsigned char byte;  //8 bits
typedef unsigned short int word; //16 bits
typedef word Adress;         //16 bits

#define MEMSIZE (64 * 1024)  //64KiB

byte mem[MEMSIZE];

void b_write(Adress adr, byte b)
{
    mem[adr] = b;
}
byte b_read(Adress adr)
{
    return mem[adr];
}

void w_write(Adress adr, word w)
{
    mem[adr + 1] = (byte)(w >> 8);
    mem[adr] = (byte)w;
}

word w_read(Adress adr)
{
    word w = ((word)mem[adr + 1]) << 8;
    printf("%x\n", w);
    w = w | mem[adr];
    return w;
}

int main()
{
    
    byte tst_byte = 0x0A; 
    b_write(0, tst_byte);
    byte res_byte = b_read(0);
    printf("res = %x tst = %x\n", res_byte, tst_byte);
    assert(res_byte == tst_byte);

    word tst_word = 0xFF0A;
    w_write(3, tst_word);
    word res_word = w_read(3);
    printf("res_word = %x tst_word = %x\n", res_word, tst_word);
    assert(res_word == tst_word);

    return 0;
}