#ifndef DISK_H
#define DISK_H
#include "system.h"

class Disk
{
public:
    Disk(double x, double y, double radius);
    double x;
    double y;
    double radius;

    void move(double dx, double dy);

    double distance(Disk &other);
};

#endif