// heap corruption test
// C> HeapCorr doublefree

#include <iostream>

char* mem = NULL;

void create()
{
    mem = (char*) malloc(10 * sizeof(char)); // new char[10];

    mem[0] = 'A';
    mem[1] = 'B';
    mem[2] = 'C';
    mem[3] = 0;
}

void destroy()
{
    free(mem);   // delete mem
}

int main(int argc, char *argv[])
{
    create();

    std::cout << mem;

    destroy();

    // if 1st cmd arg is "doublefree"
    if (argc == 2 && strcmp(argv[1], "doublefree") == 0)
    {
        destroy();
    }
}

/* https://en.wikipedia.org/wiki/Magic_number_(programming) 
   
   (VC++ magic numbers)
   cccccccc : uninitialized stack memory
   cdcdcdcd : ninitialized heap memory
   dddddddd : freed heap memory
   feeefeee : freed heap memory
*/