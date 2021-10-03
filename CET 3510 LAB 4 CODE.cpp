#include <stdio.h>
#include <iostream>
int main()
{
	char sc8_arr[5] = { 0x41,
						0x42,
						0x59,
						0x79,
						0x7A };
	char* scPtr0, * scPtr1, * scPtr2, * scPtr3, * scPtr4;


	short int sc16_arr[5]{ 0x4141,
						   0x4242,
						   0x5959,
						   0x7979,
						   0x7A7A };
	short int* sc16Ptr0, * sc16Ptr1, * sc16Ptr2, * sc16Ptr3, * sc16Ptr4;

	
	short int sc32_arr[5]{ 0x4141,
						   0x4242,
						   0x5959,
						   0x7979,
						   0x7A7A };
	short int* sc32Ptr0, * sc32Ptr1, * sc32Ptr2, * sc32Ptr3, * sc32Ptr4;

	int md[5], madd[5];
	int i;  //used as index

	// address for each element in an array sc8_arr[5]
	scPtr0 = &sc8_arr[0];
	scPtr1 = &sc8_arr[1];
	scPtr2 = &sc8_arr[2];
	scPtr3 = &sc8_arr[3];
	scPtr4 = &sc8_arr[4];

	// address for each element in an array sc16_arr[5]
	sc16Ptr0 = &sc16_arr[0];
	sc16Ptr1 = &sc16_arr[1];
	sc16Ptr2 = &sc16_arr[2];
	sc16Ptr3 = &sc16_arr[3];
	sc16Ptr4 = &sc16_arr[4];

	// address for each element in an array sc32_arr[5]
	sc32Ptr0 = &sc32_arr[0];
	sc32Ptr1 = &sc32_arr[1];
	sc32Ptr2 = &sc32_arr[2];
	sc32Ptr3 = &sc32_arr[3];
	sc32Ptr4 = &sc32_arr[4];

	//Display Hex value, decimal value, and char value for each element of char array
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("----------The value of each element of 8-bit array-------\n");
	for (i = 0; i < 5; i++)
	{
		printf("The memory address of the element %d in an array is 0x%X (HEX), %d(decimal), %c (character)\n",
			i, sc8_arr[i], sc8_arr[i], sc8_arr[i]);
	}

	//Display address in hexadecimal for each element of char array
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("----------The address of each element of 8-bit array----------\n");
	for (i = 0; i < 5; i++)
	{
		printf("The memory address of element %d in an array is 0x%p (hexidecimal)\n", i, scPtr0 + i);
	}
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	//Find the total numbers in byte of array sc8_arr[5]
	printf("----------The size information in bytes of an 8-bit array------\n");
	printf("The total numbers in bytes of an 8-bit array with 5 elements is %d bytes\n",
		sizeof(sc8_arr));

	//Find the total number of byte(s) of each element of array
	for (i = 0; i < 5; i++)
	{
		md[i] = sizeof(sc8_arr[i]);
		madd[i] = sizeof(scPtr0 + i);
		printf("------------------------------------------------\n");
		printf("The size of element %d is %d bytes\n", i, md[i]);
		printf("The size of the address of the element %d is %d bytes\n ", i, madd[i]);
	}

	/********************************************** 16 bit print outs***************************/

//Display Hex value, decimal value, and char value for each element of char array
	printf("\n\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("----------The value of each element of 16-bit array-------\n");
	for (i = 0; i < 5; i++)
	{
		printf("The memory address of the element %d in an array is 0x%X (HEX), %d(decimal), %c (character)\n",
			i, sc16_arr[i], sc16_arr[i], sc16_arr[i]);
	}

	//Display address in hexadecimal for each element of char array
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("----------The address of each element of 16-bit array----------\n");
	for (i = 0; i < 5; i++)
	{
		printf("The memory address of element %d in an array is 0x%p (hexidecimal)\n", i, sc16Ptr0 + i);
	}
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	// Find the total number in byte of array sc16_arr[5]
	printf("--------The size information in bytes of an 16 bit array-------\n");
	printf("The total numbers in bytes of an 16-bit array with 5 elements is %d bytes\n",
		sizeof(sc16_arr));

	//Find the total number of byte(s) of each element of array
	for (i = 0; i < 5; i++) {
		md[i] = sizeof(sc16_arr[i]);
		madd[i] = sizeof(sc16Ptr0 + i);
		printf("--------------------------\n");
		printf("The size of element %d is %d bytes\n",
			i,
			md[i]);
		printf("The size of the address of the element %d is %d bytes\n",
			i,
			madd[i]);
	}

	/********************************************** 32 bit print outs***************************/

//Display Hex value, decimal value, and char value for each element of char array
	printf("\n\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("----------The value of each element of 32-bit array-------\n");
	for (i = 0; i < 5; i++)
	{
		printf("The memory address of the element %d in an array is 0x%X (HEX), %d(decimal), %c (character)\n",
			i, sc32_arr[i], sc32_arr[i], sc32_arr[i]);
	}

	//Display address in hexadecimal for each element of char array
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("----------The address of each element of 32-bit array----------\n");
	for (i = 0; i < 5; i++)
	{
		printf("The memory address of element %d in an array is 0x%p (hexidecimal)\n", i, sc32Ptr0 + i);
	}
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	// Find the total number in byte of array sc32_arr[5]
	printf("--------The size information in bytes of an 32 bit array-------\n");
	printf("The total numbers in bytes of an 32-bit array with 5 elements is %d bytes\n",
		sizeof(sc32_arr));

	//Find the total number of byte(s) of each element of array
	for (i = 0; i < 5; i++) {
		md[i] = sizeof(sc32_arr[i]);
		madd[i] = sizeof(sc32Ptr0 + i);
		printf("--------------------------\n");
		printf("The size of element %d is %d bytes\n",
			i,
			md[i]);
		printf("The size of the address of the element %d is %d bytes\n",
			i,
			madd[i]);
	}

	system("pause");
	return 0;
} 
