GGE 0.4
-------

GGE is supposed to be a collection of functions and classes used in the
games written along the progress- project.

To use it, just place the files 

  gge.h   and
  gge.cpp
  
inside your project folder and include  gge.h

  #include "gge.h"


By the way: This time an even bigger cheat with the maximum amount of code had to be made.

To meet the maximum code space with GGE 0.4 the file test.cpp was not included into the measurement this time.

And sorry a second time: Some difficulties came up including functions and classes in the GGE.cpp- file.
Thus due to the fact that GGE is planned rather to be a collection of classes, I removed the functions

  dice(),
  dice10()
  
and

  dice (int)
  
and replaced them with a class

  ggeDice
  
which allows you to do the same as with the functions above, however code using GGE 0.3 so far has to be changed.


Also the routime for throwing the dice (generation of a random number) got improved. Now it does not take a second anymore to get a seperate result when the dice is rolled again.
Except the next result is the same as before (which can happen with a probability of 1/maximum_number) of course.

Before the next second of the system time had to begin to make the random number generation giving back a new random number.



Implemented classes:
--------------------

ggeDice

Methods:

ggeDice(int max);  // Constructor; The argument is the highest number on the dice
~ggeDice();        // Destructor;
int roll();         // Lets the dice roll and returns the result.


How to use GGE:
----------------

Instance a dice as an object:

  ggeDice *dice;
  dice = new ggeDice(6);  // To simulate a 6- sided dice.
  
Then roll the dice:

  (*dice).roll();
  
Or remove the dice if not needed anymore:

  delete (dice);


Thus creations of dices have to be added to code using GGE 0.3 and the dice()- calls have to be replaced by

  (*dice).roll();
  



Version history:
----------------

Version 0.4

Replacing the functions dice (int) and dice10() with a class  ggeDice.
Due to technical problems with the development environment I had to remove the functions.

However the random number generation works better now.


Version 0.3

New function implemented to dice to an arbitrary hightest number with passing 
it as argument:  int dice(int n);

In fact dice10() now uses dice() to roll the dice with the argument of 10


Version 0.2

gge.cpp got introduced to contain the function and future functions and
classes.
As in version 0.1 just  gge.h  needs to be included into the source file of
the game to make it work. gge.cpp will included via the file gge.h
