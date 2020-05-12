#include <stdio.h>
#include "Point.h"

int main() {
    Point* my_p;
    my_p = Point__create(3.1, 2);
    print(my_p);
}