# Test2

data and coding test
This is code which simulates random motions of hard disks in a 2D box.

Much of the code that is required for this program to work had been initialy removed.
Both of the header files "system.h" and "disk.h" which are required to declare all classes, variables and methods did not exist and these had to be added.

"system.cpp" did not include any of the include statements that are required for it to use any of the classes in "disk.h" or "system.h" so this was included.

Furthermore, a method was defined for a uniform normal distribution that was used to model the motion of the particles.

"main.cpp" was nearly correct but some include statements were neccessary so that it could access the classes.

in "disk.cpp" there was initially no method which was calculating the distance between the disks. This was done by creating two instances of the class and subtracting the distance between the x and y components and then using the pythagorean distance formula to find the distance.

The python script in "view.ipynb" and "view.py" are identical except one is on a jupyter notebook and all of this code was already functioning perfectly therefore nothing was changed here.

A Makefile has been added using an example similar to what was shown in the seminar such that compilation and running of the code is much easier.
