<img src="https://upload.wikimedia.org/wikipedia/en/thumb/2/29/Harvard_shield_wreath.svg/1200px-Harvard_shield_wreath.svg.png" width="200" />

# HarvardX CS50's Introduction To Computer Science
## Week 1 Problem Set: Mario

### World 1-1
Toward the end of World 1-1 in Nintendo’s Super Mario Brothers, Mario must ascend right-aligned pyramid of blocks, a la the below.

<img src="https://cs50.harvard.edu/x/2023/psets/1/mario/less/pyramid.png" />

Let’s recreate that pyramid in C, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is wide, so the pyramid itself will also be taller than it is wide.

```
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
```

The program we’ll write will be called mario. And let’s allow the user to decide just how tall the pyramid should be by first prompting them for a positive integer between, say, 1 and 8, inclusive.

Here’s how the program might work if the user inputs 8 when prompted:

```
$ ./mario
Height: 8
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
```

Here’s how the program might work if the user inputs 4 when prompted:

```
$ ./mario
Height: 4
   #
  ##
 ###
####
```

### Getting Started 
1. Make sure you have a compiler for C programs. Some popular compilers include GCC, Clang, and Microsoft Visual C++.
2. Clone the repo.
3. `cd` into the respective directory.
4. Compile the code `gcc mario mario.c`.
5. Start the program `./hello`

### Implementation Details
This program will calculate the number of years required for the population to grow from the start size to the end size.
- This program will first prompt the user for a starting population size.
    - If the user enters a number less than 9 (the minimum allowed population size), the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9. (If we          start with fewer than 9 llamas, the population of llamas will quickly become stagnant!)
- Your program should then prompt the user for an ending population size.
    - If the user enters a number less than the starting population size, the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population        size. (After all, we want the population of llamas to grow!)
- Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.
- Finally, your program should print the number of years required for the llama population to reach that end size, as by printing to the terminal Years: n, where n is the number of years.
