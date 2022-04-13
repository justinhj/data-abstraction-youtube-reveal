// Control and Procedural Abstractions
#include <stdio.h>
#include <stdlib.h>

// Conditional abstractions

bool if_example(int x, int y) {
    if(x%2==0) {
        return false;
    } else {
        return true;
    }
}

// Loop example
void loop_example(int n) {
    int iterations = n;

    while(iterations > 0) {
        iterations -= 1;
    }
}

// Procedural abstractions

int square(int num) {
    return num * num;
}

int twice(int num) {
    return num + num;
}

int twice_square(int num) {
    return twice(square(num));
}

// Recursion

int add_n_times(int amount, int acc, int n) {
    if(n == 0) {
        return acc;
    } else {
        return add_n_times(amount, acc + amount, n - 1);
    }
}

// Encapsulation, specification...

// Read a file into memory
char *read_file(const char *file_path) {
    FILE *f = fopen("textfile.txt", "rb");
    fseek(f, 0, SEEK_END);
    long fsize = ftell(f);
    fseek(f, 0, SEEK_SET);

    char *buf = (char *)malloc(fsize + 1);
    fread(buf, fsize, 1, f);
    return buf;
}
