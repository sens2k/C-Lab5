#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <conio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 5, задание - 6
*/


int main(int argc, char* argv[])
{
    char string1[50];
    char* ptr1 = string1;
    int length = 0;

    gets_s(string1);

    while (*ptr1)
    {
        putchar(*ptr1++);
        length++;
    }
    putchar('\n');
    printf("Length = %d\n", length);
}



