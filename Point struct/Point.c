#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "Point.h"

struct Point {
    double x;
    double y;
};

void Point__init(Point* this, double _x, double _y) {
    this->x = _x;
    this->y = _y;
}

Point* Point__create(double _x, double _y) {
    Point* new_p = (Point*)malloc(sizeof(Point));
    Point__init(new_p, _x, _y);
    return new_p;
}
void Point__delete(Point* this) {
    if (this) {
        free(this);
    }
}

void set_x(Point* this, double _x) {
    this->x = _x;
}
void set_y(Point* this, double _y) {
    this->y = _y;
}

double get_x(const Point* this) {
    return this->x;
}
double get_y(const Point* this) {
    return this->y;
}

void print(const Point* this) {
    printf("The point's coordinates are: x:%f and y:%f\n", this->x, this->y);
}