main:hello.o print.o
	gcc hello.o print.o -o main
hello.o:hello.c
	gcc -c hello.c
print.o:print.c
	gcc -c print.c 
.PHONY:clean

#linux 下用 rm -rf *.o main
clean:
	@echo "=======clean project========="
	del  *.o 
	@echo "=======clean completed========="
