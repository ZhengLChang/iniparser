#Makefile
CC=gcc
INCLUDE=-I./include/
LIB=-lpthread -lcrypto
#CFLAGS=-g -Wall -Werror -D_REENTRANT ${LIB} ${INCLUDE}
CFLAGS=-g ${LIB} ${INCLUDE}
MainFile=main.c
OutPut=iniparser
src=src/iniparser.c \
	src/dictionary.c \
	src/util.c \
	src/log.c \
	src/buffer.c
target=$(patsubst %.c, %.o, ${MainFile})
target+=$(patsubst %.c, %.o, ${src})
springcleaning=$(patsubst %.c, %, $(wildcard ./*.c))
springcleaning+=$(patsubst %.c, %.o, $(wildcard ./*.c))
springcleaning+=$(patsubst %.c, %.o, ${src})
springcleaning+=$(OutPut)

.PHONY: all clean

all: $(OutPut)
$(OutPut):${target}
	$(CC) ${target}  -o $@ ${CFLAGS} ${INCLUDE} 
	
clean:
	-@rm  ${springcleaning}
