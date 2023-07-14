<img src="https://upload.wikimedia.org/wikipedia/en/thumb/2/29/Harvard_shield_wreath.svg/1200px-Harvard_shield_wreath.svg.png" width="200" />

# HarvardX CS50's Introduction To Computer Science
## Week 1 Problem Set: Hello

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
