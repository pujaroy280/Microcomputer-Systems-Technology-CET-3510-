#include "stdio.h"
#include <bitset>
#include <iostream>

using namespace std;

int main(void)
{
	char cl;
	unsigned char ucl;
	short int i1;
	unsigned short int us_shrt_int;
	signed int signedInt = 0;
	unsigned int us_int = 0;

	//more variavble to declare

	//Data type of char
	cout << "The minimum value of a char is " << CHAR_MIN << endl;
	cout << "The maximum value of a char is " << CHAR_MAX << endl;
	cout << "The storage size in byte(s) of a char is " << sizeof(cl) << endl;

	cout << "Input a hexidecimal number in the data type of char, for example 8a" << endl;
	scanf_s("%x", &cl);

	//bitset stores the number of bits in 8*sizeof(cl)
	bitset<8 * sizeof(cl)>charBits(cl);
	cout << "The converted binary value is " << charBits << endl;
	printf("The converted binary value is %i \n", cl);
	printf("----------------------------------\n");

	//Data type of unsigned char
	cout << "The maximum value of an unsigned char is " << UCHAR_MAX << endl;
	cout << "The storage size in byte(s) of an unsigned char is " << sizeof(ucl) << endl;

	cout << "Input a hexidecimal number in the data type of unsigned char, for example 8a" << endl;
	scanf_s("%x", &ucl);

	//bitset stores the number of bits in 8*sizeof(ucl)
	bitset<8 * sizeof(ucl)> ucharBits(ucl);
	cout << "The converted binary value is " << ucharBits << endl;
	printf("The converted decimal values is %i \n", ucl);
	printf("------------------------------------\n");

	// Data type of short int
	cout << "The minimum value of a short int is " << SHRT_MIN << endl;
	cout << "The maximum value of a short int is " << SHRT_MAX << endl;
	cout << "The storage size in byte(s) of a short int is " << sizeof(i1) << endl;

	cout << "Input a hexidecimal number in the data type of short int, for example 8fff" << endl;
	scanf_s("%x", &i1);

	//bitset stores the number of bits in 8*sizeof(il)
	bitset<8 * sizeof(i1)>shortBits(i1);
	cout << "The converted binary value is " << shortBits << endl;
	printf("The converted decimal value is %i \n", i1);
	printf("-----------------------------------\n");
	
	//Data unsigned short int
	cout << "The maximum value of a unsigned short int is " << USHRT_MAX << endl;
	cout << "The storage size in byte(s) of a unsigned short int is " << sizeof(us_shrt_int) << endl;
	cout << "Input a hexidecimal number in the data type of unsigned short int, for example BFFF" << endl;
	scanf_s("%x", &us_shrt_int);

	//bitset stores the number of bits in 8*size(us_shrt_int)
	bitset <8 * sizeof(us_shrt_int)> us_shrt_Bits(us_shrt_int);
	cout << "The converted binary value is " << us_shrt_int << endl;
	printf("The converted decimal value is %i \n", us_shrt_int);
	printf("-----------------------------\n");

	//Data signed int
	cout << "The minimum value of a int is " << INT_MIN << endl;
	cout << "The maximum value of a int is " << INT_MAX << endl;
	cout << "The storage size in byte(s) of a signed int is " << sizeof(signedInt) << endl;

	//bitset stores the number of bits in 8*size(signedInt)
	bitset <8 * sizeof(signedInt)> us_shrt_Bits(signedInt);
	cout << "The converted binary value is " << signedInt << endl;
	printf("The converted decimal value is %i \n", signedInt);
	printf("-----------------------------\n");

	//Data unsigned int
	cout << "The maximum value of a unsigned int is " << INT_MAX << endl;
	cout << "The storage size in byte(s) of a signed int is " << sizeof(us_int) << endl;
	cout << "Input a hexadecimal number in the data type of unsigned int, for example 8FFF8FFF" << endl;

	//bitset stores the number of bits in 8*size(us_int)
	bitset <8 * sizeof(us_int)> us_shrt_Bits(us_int);
	cout << "The converted binary value is " << us_int << endl;
	printf("The converted decimal value is %i \n", us_int);
	printf("-----------------------------\n");

	system("pause");
	exit(0);
	return 0;
}

