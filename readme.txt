GGE 0.1
-------

GGE is supposed to be a collection of functions and objects used in the
games written along the progress- project.

It is planned to write several games along this progress- project to demonstrate programming skills in a hopefully funny way.

If things keep to turn out good GGE is supposed to become a small game engine
one day. 

To use it, just place the file gge.h inside your project folder and include 
it as

  #include "gge.h"

See the implemented function below.

At the moment the library (as which GGE is designed) comes up just as a .h- file, however containing running code, which is of course not how it should be done.
This will be corrected if some more code space is available.

Also just one function inside it does not really earn the status of a library, thus just a minor version number.



Implemented functions:
----------------------

int dice10();

returns a random number in the range from 1 to 10;




Version history:
----------------

Version 0.1

Initial implementation
Contains a function to "roll a dice" with values from 0 to 10
