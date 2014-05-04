cc=gcc
edit:test.o
	${cc} -o edit test.o
test.o:test.c student_info.h
	${cc} -c test.c
clean:
	rm test.o
