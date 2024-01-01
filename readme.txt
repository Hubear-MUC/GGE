GGE 0.2
-------

GGE is supposed to be a collection of functions and objects used in the
games written along the progress- project.

It is planned to write several games along this progress- project to demonstrate programming skills in a hopefully funny way.


If things keep to turn out good GGE is supposed to become a small game engine one day. 

To use it, just place the file GGE.h inside your project folder and include 
it as

  #include "gge.h"

See the implemented function below.

As some development since version 0.1 the code files got separated into a header- file (.h) and a C++- code file which contains the implementations.

Also just one function inside it does not really earn the status of a library, also the usage did not change since the previous version, thus just a stepup of the minor version number.



Implemented functions:
----------------------

int dice10();

returns a random number in the range from 1 to 10;




Version history:
----------------

Version 0.2

Separation of the library files into a .h- file and a .cpp- file.


Version 0.1

Initial implementation
Contains a function to "roll a dice" with values from 0 to 10
