gcc -Wall -c mylib/mylib.c -o mylib.o
gcc -Wall -c main_test.c -o main.o
gcc -o main.exe main.o mylib.o -lm
main.exe