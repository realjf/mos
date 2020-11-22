# mos
an simple operating system

# how to build
## tools

- gcc
- ld
- nasm
- qemu
- virtualbox

```shell script
apt-get install gcc nasm qemu qemu-system virtualbox
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

## build iso image to make our os realy bootable and then we can use virtualbox or make bootable use to boot our os
### 1. create new folder with os name
### 2. create boot folder in it and grub folder in boot
```
mkdir mos/boot/grub -p
```

### 3. create a file grub.cfg in grub folder

### 4. copy an paste the previously created .bin file to boot folder

### 5. build iso image 
```
grub-mkrescue -o mos.iso mos/
```

### 6. open virtualbox to test the .iso file

- name: test
- machine folder: /your/vm path/
- type: other
- version: other/unknown
- memory: 64MB
- hard disk: do not add a virtual hard disk

then create it

### 7. virtualbox - settings - storage - controller:IDE - empty
- select the "Optical Drive" attribute,  and choose a virtual optical disk
- add a disk image(select your .iso file)
- and then choose the image, click ok
- start your os
