# ARM11_Emulator_Assembler
An emulator and assembler for an ARM11 instruction set in C

1. _Emulator:_ Simulates the execution of an ARM binary file on a Raspberry Pi
2. _Assembler:_ translates an ARM assembly source file into a
binary file that can subsequently be executed by the emulator
 

## Emulator/Assembler
 
 See `src` directory.
 
 - `emulate.c` contains the main functionality for the emulator.
 - `assemble.c` contains the main functionality for the assembler.
 
 You can compile emulate using `make emulate`, and assemble using `make assemble`.

## Tests
 
 - See `test` directory for the ruby test suite.
 - See `src/unit_tests` directory for the unit tests.
 
Run `make` in the root folder to compile emulate/assemble. Then this will run the unit tests and the ruby tests. Ensure submodules are imported using `git submodule init` and `git submodule update`.

NB: The test loop01 may fail on some machines as there is a timeout and it requires an extremely large number of operations.

## Authors
 
* **Tiger Cross**
* **Daniel Hails**
* **Will Burr**
* **Matt Malarkey**

## Acknowledgments

* Unity

