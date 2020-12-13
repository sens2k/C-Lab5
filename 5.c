#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <conio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 5, задание - 5
*/


int main(int argc, char* argv[])
{
    char string1[50], string2[50];
    char* ptr1 = string1;
    char* ptr2 = string2;
    int Equals = 0;

    gets_s(string1);
    gets_s(string2);

    while (*ptr1)
    {
        while (*ptr2)
        {
            if (*ptr1 == *ptr2)
            {
                Equals = 1;
            }
            *ptr2++;
        }
        if (Equals != 1) putchar(*ptr1);
        *ptr1++;
        Equals = 0;
        ptr2 = string2;
    }
}



