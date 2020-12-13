#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <conio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 5, задание - 3
*/

int main(int argc, char* argv[])
{
    char s[] = "Check";
    char * ptr_s;
    char st[] = "Check Point";

    ptr_s = st;
    puts(s);
    putchar(*(ptr_s + 2));
    putchar('\n');
    puts(ptr_s + 6);
}


