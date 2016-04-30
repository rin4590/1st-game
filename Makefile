
all:build

EXEC=1st
SRCS=1st.c
build:
	#cc $SRCS -o $EXEC
	cc 1st.c -o 1st

test:build
	1st