#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector>
#include <random>
#include <string>
#include <fstream>
#include "disk.h"

// declaring Disk class early
class Disk;

class System
{
public:
    System(int N, double displacement, double radius, double boxSize, int seed);
    int N;
    double displacement;
    double radius;
    double boxSize;
    int seed;
    std::vector<Disk> disks;

    int nSide;

    bool overlap(int i);
    void step();
    void enforceBoundaries();

    // add in uniform

    // random number generator
    std::mt19937 gen;
    // uniform distribution
    std::uniform_real_distribution<double> uniformDist;
    // function to sample uniformly distributed random numbers
    double uniform(double min, double max);

    void save(const std::string &filename);

    void step(double disks);

    void enforceBoundaries(Disk &disk);
};

#endif