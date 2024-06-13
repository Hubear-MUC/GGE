# GGE
A small library containing things for small games

See "readme.txt" for details.

Code extent: Max. 186 bytes

---

Version history:
--

Version 0.4

Replacing the functions dice (int) and dice10() with a class  ggeDice.
Due to technical problems with the development environment I had to remove the functions.

However the random number generation works better now.


Version 0.3

New function implemented to dice to an arbitrary hightest number with passing 
it as argument:  int dice()

In fact dice10() now uses dice() to roll the dice with the argument of 10


Version 0.2

Separation of the library files into a .h- file and a .cpp- file.


Version 0.1

Initial implementation
Contains a function to "roll a dice" with values from 0 to 10
