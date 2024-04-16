GGE 0.3
-------

GGE is supposed to be a collection of functions and objects used in the
games written along the progress- project.

To use it, just place the files 

  gge.h   and
  gge.cpp
  
inside your project folder and include  gge.h

  #include "gge.h"


By the way: At GGE was a little cheated regarding the code space in which
the code should fit.
To GGE also the file  test.cpp  belongs, to test the function included. 
These bytes of code were not counted despite this file belongs to the written 
code.

Sorry about that to all who have a strict look on the growth of the code, 
however it seemed more important to me to include the new function to make 
GGE more flexible when used in dice games.


Version 0.3 now supports an arbitrary maximal number for the dice to roll.
This should make it more usable for role playing games.



Implemented functions:
----------------------

int dice(int vl)

returns a random number in the range from 1 to the value given as argument vl.

For example

  dice(100)

returns a random number from 1 to 100.



int dice10()

returns a random number in the range from 1 to 10;



Version history:
----------------

Version 0.3

New function implemented to dice to an arbitrary hightest number with passing 
it as argument:  int dice()

In fact dice10() now uses dice() to roll the dice with the argument of 10


Version 0.2

GGE.cpp got introduced to contain the function and future functions and
classes.
As in version 0.1 just  GGE.h  needs to be included into the source file of
the game to make it work. GGE.cpp will included via the file GGE.h
