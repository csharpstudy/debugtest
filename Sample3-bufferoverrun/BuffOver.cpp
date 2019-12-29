// buffer overflow (buffer overrun) test program
// C> buffover 111122223333444455556666

// Basic Runtime Check (/RTC) compiler option : disabled

// To disable 'strcpy' deprecation in VC++
#define _CRT_SECURE_NO_WARNINGS  

#include <iostream>
using namespace std;

void run(char* s)
{
    char buff[8];
    strcpy(buff, s);
}

int main(int argc, char *argv[])
{
    run(argv[1]);

    cout << argc;
}
