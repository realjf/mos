kmain()
{
    char* vidmem=(char*)0xb8000;
    vidmem[0] = 'H'; // this is the character to be printed
    vidmem[1] = 0x04; // this is the color of the character
    vidmem[0] = 'E';
    vidmem[1] = 0x04;
}