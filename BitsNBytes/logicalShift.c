/*
 *Program to right shift the num by n times;
 *
 * @Rohit Dhiman  ID -> 1910991113
 *
 * Assignment no. -> 03 (BitsNBytes)
 *
 *15/08/2021
 *
 * Question number -> 05
 */
#include <stdio.h>
#include <stdlib.h>

int getByte(int num, int n)
{


	return num >> (n << 3) & 0xFF;
}

int main()
{
	int num = 0x12345678;
	int byte;
	printf("Enter the byte number you want to extract from 0x12345678\n");
	scanf("%d", &byte);
	if(byte > 3 || byte < 0)
		printf("Invalid byte!!\n");
	printf("0x%x\n", getByte(num, byte));
	return 0;
}

