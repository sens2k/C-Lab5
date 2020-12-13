#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <conio.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 5, задание - Самостоятельная работа
*/

void a();
void b();
void c();
void d();
void e();
void f();
void g();
void h();
void i();
void j();

int main(int argc, char* argv[])
{
    j();
}

void a()
{
    char string1[100];
    char* ptr;
    ptr = string1;
    gets_s(string1);

    while (*ptr)
    {
        if (*ptr == '?') 
        {
            *ptr++;
            putchar('!');
        }
        else
        {
            putchar(*ptr++);
        }
    }
}
void b()
{
    char string1[100];
    char* ptr;
    ptr = string1;
    gets_s(string1);

    while (*ptr)
    {
        if (*ptr == '-') *ptr++;
        else if (*ptr == '&')
        {
            putchar('&');
            putchar('&');
            *ptr++;
        }
        else putchar(*ptr++);
    }
}
void c()
{
    char string1[100];
    char* ptr;
    ptr = string1;
    gets_s(string1);

    while (*ptr)
    {
        if ((*ptr >= 'a') && (*ptr <= 'z')) putchar(*ptr++);
        else *ptr++;
    }
}
void d()
{
    char string1[100];
    char* ptr;
    ptr = string1;
    gets_s(string1);

    while (*ptr)
    {
        if ((*ptr >= 'A') && (*ptr <= 'Z')) putchar(*ptr++ | 0b00100000);
        else putchar(*ptr++);
    }
}
void e()
{
    char string1[100];
    char* ptr;
    ptr = string1;
    gets_s(string1);

    while (*ptr)
    {
        if ((*ptr >= 'a') && (*ptr <= 'z')) putchar(*ptr++ & 0b11011111);
        else putchar(*ptr++);
    }
}
void f()
{
    int temp = 0;
    char string1[100];
    char* ptr;
    ptr = string1;
    gets_s(string1);

    while (*ptr)
    {
        if (*ptr != '+')
        {
            putchar(*ptr++);
            temp = 0;
        }
        else
        {
            if (!temp)
                putchar(*ptr++);
            temp++;
            *ptr++;
        }
    }
}
void g()
{
    int temp = 0;
    char string1[100];
    char* ptr;
    ptr = string1;
    gets_s(string1);

    while (*ptr)
    {
        if (*ptr != '*')
        {
            if (temp == 1)
                putchar('*');
            putchar(*ptr++);
            temp = 0;
        }
        else
        {
            if (temp % 2 == 1)
                putchar('+');
            *ptr++;
            temp++;
        }
    }
}
void h()
{
    int a;
    scanf("%d", &a);
    printf("%d", a);
    putchar('\n');
}
void i() {};
void j()
{
    int temp = '1';
    char string1[100];
    char* ptr;
    ptr = string1;
    gets_s(string1);

    while (*ptr)
    {
        if (*ptr >= '0' && *ptr <= '9')
        {
            if (*ptr >= temp && *ptr <= '9' || *ptr == '0')
            {
                putchar(*ptr++);
                temp = *ptr + 1;
            }
            else
            {
                putchar(*ptr++);
                temp = '1';
            }
        }
    }
}
