# mos
an simple operating system

# how to build
## tools

- gcc
- ld
- nasm
- qemu

```shell script
apt-get install gcc nasm qemu qemu-system
```

## compile .asm file
```shell script
nasm -f elf32 kernel.asm -o ksm.o
```

## compile .c file
```shell script
gcc -m32 -c kernel.c -o kc.o
```

## combine these .o files using link.ld file
```shell script
ld -m elf_i386 -T link.ld -o kernel.bin ksm.o kc.o
```

## use qemu to run the new file kernel.bin file
```shell script
qemu-system-i386 -kernel kernel.bin
```

now we can look at the H at the very beginning of the screen it is what we wanted to print


## create a  build.sh script to automate the task
