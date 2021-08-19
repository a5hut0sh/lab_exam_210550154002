obj-m:=program.o
KDIR=/lib/modules/$(shell uname -r)/build
PWD:=$(shell pwd)
all:
	make -C $(KDIR) M=$(PWD) modules
	gcc -o write write.c
	gcc -o read read.c
	gcc -o ioctl ioctl.c
        
clean:
	make -C $(KDIR) M=$(PWD) clean
	rm -rf ioctl	
	rm -rf read
	rm -rf write
