#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <conio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 5, задание - 4
*/


int main(int argc, char* argv[])
{
    char string1[50];
    char string2[50];
    char *ptr1, *ptr2;

    ptr1 = string1;
    ptr2 = string2;
    
    gets_s(string1);
    gets_s(string2);
    
    while (*ptr1) putchar(*ptr1++);
    while (*ptr2) putchar(*ptr2++);
}



