/*
 * @Date: 2020-12-04 12:31:36
 * @LastEditors: WR
 * @LastEditTime: 2020-12-04 13:45:52
 * @FilePath: \TEST\main.c
 */
#include <stdio.h>

/**
 * 常用函数
 */
static void printf_array(const char *array, size_t length)
{
    int i = 0;
    printf("{");

    while (length--) {
        printf("(%d)0X%02x, ", i - 1, array[i++]);
    }

    printf("}\r\n");
}

void test_array(void)
{
    char data1[10] = {'a', 'b', 'c', 'd'};
    printf_array(data1, sizeof(data1));
}

void test_conver(void)
{
    int i32 = 32767;
    short i4 = (short)i32;
    printf("i32 :0X%04X\r\n", i32);
    printf("i4 :%d\r\n", i4);
    printf("i4 :0X%02X\r\n", i4);
}

void main(void)
{
    test_conver();
}

