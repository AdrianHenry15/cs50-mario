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

Here’s how the program might work if the user inputs 2 when prompted:

```
$ ./mario
Height: 2
 #
##
```

And here’s how the program might work if the user inputs 1 when prompted:

```
$ ./mario
Height: 1
#
```

If the user doesn’t, in fact, input a positive integer between 1 and 8, inclusive, when prompted, the program should re-prompt the user until they cooperate:

```
$ ./mario
Height: -1
Height: 0
Height: 42
Height: 50
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
4. Compile the code `gcc mario-less mario-less.c`.
5. Start the program `./mario-less`
