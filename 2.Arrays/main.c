//Arrays

//They are homogeneous data structures that hold same type variables. They are shown consequently in the memory
//They can be defined:
// example:
//int a[5] - array of five integers
//int*a = (int*)malloc(5 * sizeof(int)); - dynamically create a pointer to an array of five integers

#include <stdio.h>
#include <stdlib.h>

int min(int a, int b){
    return a > b ? b : a;
}

int main(int argc, char *argv[]) {
    //demo
    int a[5];
    int* b = (int*)malloc(5* sizeof(int));
    for (int i = 0; i < argc; ++i) {
        if(i < 5){
            a[i] = atoi(argv[i]);
            b[i] = atoi(argv[i]);
        }
    }
    for (int i = 0; i < min(argc, 5); ++i) {
        printf("a[%d]: %d\nb[%d]: %d\n", i, a[i], i, b[i]);
    }
    free(b);
    //learn-c.org exercise
    /* TODO: define the grades variable here */
    int average ,grades[3];

    grades[0] = 80;
    /* TODO: define the missing grade
       so that the average will sum to 85. */
    grades[1] = 85;
    grades[2] = 90;

    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("The average of the 3 grades is: %d", average);
    return 0;
}
