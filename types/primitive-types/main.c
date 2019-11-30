//Messing with various C types

int main() {

    //Signed 8-bit char; lower limit
    signed char a = -128;
    //Unsigned 8-bit char; upper limit
    unsigned char b = 255;

    //Unsigned 16-bit short (min. guaranteed); upper limit
    unsigned short int c = 65535;
    //Explicitly creating a long constant and setting
    long int d = 15000L;
    //Explicitly creating an unsigned int constant and setting to signed (should convert)
    signed int e = 75536U;

}
