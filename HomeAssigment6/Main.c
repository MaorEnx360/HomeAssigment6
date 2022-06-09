#include <stdio.h>
#include <stdlib.h>
#define BYTE 8 
#define MaskOF32 0b10000000000000000000000000000000
#define PRINT_IF_EVEN(a) do {	\
	if((checkEvenParity(a))==(1)) printf("The sum of '1's number %d is Even \n", (a)); else printf("The sum of '1's number %d is Odd \n", (a)); \
}while (0)
int pack4Chars2Int(char c1, char c2, char c3, char c4);
char PrintDecToNum(const unsigned int num);
char PrintDecToNumByte(const unsigned char num);
int checkEvenParity(short input);


char main() {
	//char c1 = 'a';
	//char c2 = 'b';
//	char c3 = 'c';
	//char c4 = 'd';
	//printf("Char c1 is %c that equal to ", c1);
	//PrintDecToNumByte(c1);
	//printf("Char c2 is %c that equal to ", c2);
	//PrintDecToNumByte(c2);
	//printf("Char c3 is %c that equal to ", c3);
	//PrintDecToNumByte(c3);
	//printf("Char c4 is %c that equal to ", c4);
	//PrintDecToNumByte(c4);
	//printf("the result is : ");
//	PrintDecToNum(pack4Chars2Int(c1, c2, c3, c4));
	PRINT_IF_EVEN(24);
}

int pack4Chars2Int(char c1, char c2, char c3, char c4)
{
	
	int C1 = c1 << 24;
	int C2 = c2 << 16;
	int C3 = c3 << 8;
	int C4 = c4;

	return (C1 | C2 | C3 | C4);
}

char PrintDecToNumByte(const unsigned char num) {
	unsigned char mask = 128; //10000000
	printf("0b");
	for (int i = 0; i < BYTE; i++, mask >>= 1) {
		if (num&mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	printf("\n");
	return 0;
}
int checkEvenParity(short input)
{
	int sum = 0;
	unsigned short mask = 0b1000000000000000;
	for (int i = 0; i < 16; i++, mask >>= 1) {
		if (input&mask)
			sum += 1;
	}
	if (sum % 2 == 0)
		return 1;
	return 0;
}
char PrintDecToNum(const unsigned int num) {
	unsigned int mask = MaskOF32; //10000000
	printf("0b");
	for (int i = 0; i < 32; i++, mask >>= 1) {
		if (num&mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	printf("\n");
	return 0;
}
