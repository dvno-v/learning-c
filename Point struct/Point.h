#ifndef POINT_H

#define POINT_H

typedef struct Point Point;


void Point__init(Point*, double, double);
Point* Point__create(double, double);
void Point__delete(Point*);

void set_x(Point*);
void set_y(Point*);

void print(const Point*);

double get_x(const Point*);
double get_y(const Point*);

#endif //!POINT_H